private void blur(BufferedImage image) {
    float[] matrix = GAUSSIAN_BLUR_KERNELS[blurKernelSize - 1];
    Kernel gaussianBlur1 = new Kernel(matrix.length, 1, matrix);
    Kernel gaussianBlur2 = new Kernel(1, matrix.length, matrix);
    RenderingHints hints = new RenderingHints(RenderingHints.KEY_RENDERING, RenderingHints.VALUE_RENDER_SPEED);
    ConvolveOp gaussianOp1 = new ConvolveOp(gaussianBlur1, ConvolveOp.EDGE_NO_OP, hints);
    ConvolveOp gaussianOp2 = new ConvolveOp(gaussianBlur2, ConvolveOp.EDGE_NO_OP, hints);
    BufferedImage scratchImage = EffectUtil.getScratchImage();
    for (int i = 0; i < blurPasses; i++) {
        gaussianOp1.filter(image, scratchImage);
        gaussianOp2.filter(scratchImage, image);
    }
}
