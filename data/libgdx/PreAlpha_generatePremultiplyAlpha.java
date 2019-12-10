private void generatePremultiplyAlpha(File out) {
    try {
        BufferedImage outImage = new BufferedImage(image.getWidth(), image.getHeight(), BufferedImage.TYPE_INT_ARGB);
        float[] color = new float[4];
        WritableRaster raster = image.getRaster();
        WritableRaster outRaster = outImage.getRaster();
        for (int x = 0, w = image.getWidth(); x < w; ++x) for (int y = 0, h = image.getHeight(); y < h; ++y) {
            raster.getPixel(x, y, color);
            float alpha = color[3] / 255f;
            for (int i = 0; i < 3; ++i) color[i] *= alpha;
            outRaster.setPixel(x, y, color);
        }
        ImageIO.write(outImage, "png", out);
    } catch (IOException e) {
        e.printStackTrace();
    }
}
