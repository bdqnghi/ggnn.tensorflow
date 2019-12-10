/**
 * Splits an atlas into seperate image and ninepatch files.
 */
public void splitAtlas(TextureAtlasData atlas, String outputDir) {
    // create the output directory if it did not exist yet
    File outputDirFile = new File(outputDir);
    if (!outputDirFile.exists()) {
        outputDirFile.mkdirs();
        System.out.println(String.format("Creating directory: %s", outputDirFile.getPath()));
    }
    for (Page page : atlas.getPages()) {
        // load the image file belonging to this page as a Buffered Image
        BufferedImage img = null;
        try {
            img = ImageIO.read(page.textureFile.file());
        } catch (IOException e) {
            printExceptionAndExit(e);
        }
        for (Region region : atlas.getRegions()) {
            System.out.println(String.format("Processing image for %s: x[%s] y[%s] w[%s] h[%s], rotate[%s]", region.name, region.left, region.top, region.width, region.height, region.rotate));
            // check if the page this region is in is currently loaded in a Buffered Image
            if (region.page == page) {
                BufferedImage splitImage = null;
                String extension = null;
                // check if the region is a ninepatch or a normal image and delegate accordingly
                if (region.splits == null) {
                    splitImage = extractImage(img, region, outputDirFile, 0);
                    extension = OUTPUT_TYPE;
                } else {
                    splitImage = extractNinePatch(img, region, outputDirFile);
                    extension = String.format("9.%s", OUTPUT_TYPE);
                }
                // check if the parent directories of this image file exist and create them if not
                File imgOutput = new File(outputDirFile, String.format("%s.%s", region.index == -1 ? region.name : region.name + "_" + region.index, extension));
                File imgDir = imgOutput.getParentFile();
                if (!imgDir.exists()) {
                    System.out.println(String.format("Creating directory: %s", imgDir.getPath()));
                    imgDir.mkdirs();
                }
                // save the image
                try {
                    ImageIO.write(splitImage, OUTPUT_TYPE, imgOutput);
                } catch (IOException e) {
                    printExceptionAndExit(e);
                }
            }
        }
    }
}
