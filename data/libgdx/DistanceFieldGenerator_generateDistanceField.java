/**
 * Process the image into a distance field.
 *
 * The input image should be binary (black/white), but if not, see {@link #isInside(int)}.
 *
 * The returned image is a factor of {@code upscale} smaller than {@code inImage}.
 * Opaque pixels more than {@link #spread} away in the output image from white remain opaque;
 * transparent pixels more than {@link #spread} away in the output image from black remain transparent.
 * In between, we get a smooth transition from opaque to transparent, with an alpha value of 0.5
 * when we are exactly on the edge.
 *
 * @param inImage the image to process.
 * @return the distance field image
 */
public BufferedImage generateDistanceField(BufferedImage inImage) {
    final int inWidth = inImage.getWidth();
    final int inHeight = inImage.getHeight();
    final int outWidth = inWidth / downscale;
    final int outHeight = inHeight / downscale;
    final BufferedImage outImage = new BufferedImage(outWidth, outHeight, BufferedImage.TYPE_4BYTE_ABGR);
    // Note: coordinates reversed to mimic storage of BufferedImage, for memory locality
    final boolean[][] bitmap = new boolean[inHeight][inWidth];
    for (int y = 0; y < inHeight; ++y) {
        for (int x = 0; x < inWidth; ++x) {
            bitmap[y][x] = isInside(inImage.getRGB(x, y));
        }
    }
    for (int y = 0; y < outHeight; ++y) {
        for (int x = 0; x < outWidth; ++x) {
            int centerX = (x * downscale) + (downscale / 2);
            int centerY = (y * downscale) + (downscale / 2);
            float signedDistance = findSignedDistance(centerX, centerY, bitmap);
            outImage.setRGB(x, y, distanceToRGB(signedDistance));
        }
    }
    return outImage;
}
