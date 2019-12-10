public BufferedImage processImage(BufferedImage image, int maxIterations) {
    int width = image.getWidth();
    int height = image.getHeight();
    BufferedImage processedImage = new BufferedImage(width, height, BufferedImage.TYPE_INT_ARGB);
    int[] rgb = image.getRGB(0, 0, width, height, null, 0, width);
    Mask mask = new Mask(rgb);
    int iterations = 0;
    int lastPending = -1;
    while (mask.pendingSize > 0 && mask.pendingSize != lastPending && iterations < maxIterations) {
        lastPending = mask.pendingSize;
        executeIteration(rgb, mask, width, height);
        iterations++;
    }
    processedImage.setRGB(0, 0, width, height, rgb, 0, width);
    return processedImage;
}
