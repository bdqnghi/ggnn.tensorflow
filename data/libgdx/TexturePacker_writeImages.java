private void writeImages(File outputDir, String scaledPackFileName, Array<Page> pages) {
    File packFileNoExt = new File(outputDir, scaledPackFileName);
    File packDir = packFileNoExt.getParentFile();
    String imageName = packFileNoExt.getName();
    int fileIndex = 0;
    for (Page page : pages) {
        int width = page.width, height = page.height;
        int paddingX = settings.paddingX;
        int paddingY = settings.paddingY;
        if (settings.duplicatePadding) {
            paddingX /= 2;
            paddingY /= 2;
        }
        width -= settings.paddingX;
        height -= settings.paddingY;
        if (settings.edgePadding) {
            page.x = paddingX;
            page.y = paddingY;
            width += paddingX * 2;
            height += paddingY * 2;
        }
        if (settings.pot) {
            width = MathUtils.nextPowerOfTwo(width);
            height = MathUtils.nextPowerOfTwo(height);
        }
        width = Math.max(settings.minWidth, width);
        height = Math.max(settings.minHeight, height);
        page.imageWidth = width;
        page.imageHeight = height;
        File outputFile;
        while (true) {
            outputFile = new File(packDir, imageName + (fileIndex++ == 0 ? "" : fileIndex) + "." + settings.outputFormat);
            if (!outputFile.exists())
                break;
        }
        new FileHandle(outputFile).parent().mkdirs();
        page.imageName = outputFile.getName();
        BufferedImage canvas = new BufferedImage(width, height, getBufferedImageType(settings.format));
        Graphics2D g = (Graphics2D) canvas.getGraphics();
        if (!settings.silent)
            System.out.println("Writing " + canvas.getWidth() + "x" + canvas.getHeight() + ": " + outputFile);
        for (Rect rect : page.outputRects) {
            BufferedImage image = rect.getImage(imageProcessor);
            int iw = image.getWidth();
            int ih = image.getHeight();
            int rectX = page.x + rect.x, rectY = page.y + page.height - rect.y - rect.height;
            if (settings.duplicatePadding) {
                int amountX = settings.paddingX / 2;
                int amountY = settings.paddingY / 2;
                if (rect.rotated) {
                    // Copy corner pixels to fill corners of the padding.
                    for (int i = 1; i <= amountX; i++) {
                        for (int j = 1; j <= amountY; j++) {
                            plot(canvas, rectX - j, rectY + iw - 1 + i, image.getRGB(0, 0));
                            plot(canvas, rectX + ih - 1 + j, rectY + iw - 1 + i, image.getRGB(0, ih - 1));
                            plot(canvas, rectX - j, rectY - i, image.getRGB(iw - 1, 0));
                            plot(canvas, rectX + ih - 1 + j, rectY - i, image.getRGB(iw - 1, ih - 1));
                        }
                    }
                    // Copy edge pixels into padding.
                    for (int i = 1; i <= amountY; i++) {
                        for (int j = 0; j < iw; j++) {
                            plot(canvas, rectX - i, rectY + iw - 1 - j, image.getRGB(j, 0));
                            plot(canvas, rectX + ih - 1 + i, rectY + iw - 1 - j, image.getRGB(j, ih - 1));
                        }
                    }
                    for (int i = 1; i <= amountX; i++) {
                        for (int j = 0; j < ih; j++) {
                            plot(canvas, rectX + j, rectY - i, image.getRGB(iw - 1, j));
                            plot(canvas, rectX + j, rectY + iw - 1 + i, image.getRGB(0, j));
                        }
                    }
                } else {
                    // Copy corner pixels to fill corners of the padding.
                    for (int i = 1; i <= amountX; i++) {
                        for (int j = 1; j <= amountY; j++) {
                            plot(canvas, rectX - i, rectY - j, image.getRGB(0, 0));
                            plot(canvas, rectX - i, rectY + ih - 1 + j, image.getRGB(0, ih - 1));
                            plot(canvas, rectX + iw - 1 + i, rectY - j, image.getRGB(iw - 1, 0));
                            plot(canvas, rectX + iw - 1 + i, rectY + ih - 1 + j, image.getRGB(iw - 1, ih - 1));
                        }
                    }
                    // Copy edge pixels into padding.
                    for (int i = 1; i <= amountY; i++) {
                        copy(image, 0, 0, iw, 1, canvas, rectX, rectY - i, rect.rotated);
                        copy(image, 0, ih - 1, iw, 1, canvas, rectX, rectY + ih - 1 + i, rect.rotated);
                    }
                    for (int i = 1; i <= amountX; i++) {
                        copy(image, 0, 0, 1, ih, canvas, rectX - i, rectY, rect.rotated);
                        copy(image, iw - 1, 0, 1, ih, canvas, rectX + iw - 1 + i, rectY, rect.rotated);
                    }
                }
            }
            copy(image, 0, 0, iw, ih, canvas, rectX, rectY, rect.rotated);
            if (settings.debug) {
                g.setColor(Color.magenta);
                g.drawRect(rectX, rectY, rect.width - settings.paddingX - 1, rect.height - settings.paddingY - 1);
            }
        }
        if (settings.bleed && !settings.premultiplyAlpha && !(settings.outputFormat.equalsIgnoreCase("jpg") || settings.outputFormat.equalsIgnoreCase("jpeg"))) {
            canvas = new ColorBleedEffect().processImage(canvas, 2);
            g = (Graphics2D) canvas.getGraphics();
        }
        if (settings.debug) {
            g.setColor(Color.magenta);
            g.drawRect(0, 0, width - 1, height - 1);
        }
        ImageOutputStream ios = null;
        try {
            if (settings.outputFormat.equalsIgnoreCase("jpg") || settings.outputFormat.equalsIgnoreCase("jpeg")) {
                BufferedImage newImage = new BufferedImage(canvas.getWidth(), canvas.getHeight(), BufferedImage.TYPE_3BYTE_BGR);
                newImage.getGraphics().drawImage(canvas, 0, 0, null);
                canvas = newImage;
                Iterator<ImageWriter> writers = ImageIO.getImageWritersByFormatName("jpg");
                ImageWriter writer = writers.next();
                ImageWriteParam param = writer.getDefaultWriteParam();
                param.setCompressionMode(ImageWriteParam.MODE_EXPLICIT);
                param.setCompressionQuality(settings.jpegQuality);
                ios = ImageIO.createImageOutputStream(outputFile);
                writer.setOutput(ios);
                writer.write(null, new IIOImage(canvas, null, null), param);
            } else {
                if (settings.premultiplyAlpha)
                    canvas.getColorModel().coerceData(canvas.getRaster(), true);
                ImageIO.write(canvas, "png", outputFile);
            }
        } catch (IOException ex) {
            throw new RuntimeException("Error writing file: " + outputFile, ex);
        } finally {
            if (ios != null) {
                try {
                    ios.close();
                } catch (Exception ignored) {
                }
            }
        }
    }
}
