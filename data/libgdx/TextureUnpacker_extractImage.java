/**
 * Extract an image from a texture atlas.
 * @param page The image file related to the page the region is in
 * @param region The region to extract
 * @param outputDirFile The output directory
 * @param padding padding (in pixels) to apply to the image
 * @return The extracted image
 */
private BufferedImage extractImage(BufferedImage page, Region region, File outputDirFile, int padding) {
    BufferedImage splitImage = null;
    // get the needed part of the page and rotate if needed
    if (region.rotate) {
        BufferedImage srcImage = page.getSubimage(region.left, region.top, region.height, region.width);
        splitImage = new BufferedImage(region.width, region.height, page.getType());
        AffineTransform transform = new AffineTransform();
        transform.rotate(Math.toRadians(90.0));
        transform.translate(0, -region.width);
        AffineTransformOp op = new AffineTransformOp(transform, AffineTransformOp.TYPE_BILINEAR);
        op.filter(srcImage, splitImage);
    } else {
        splitImage = page.getSubimage(region.left, region.top, region.width, region.height);
    }
    // draw the image to a bigger one if padding is needed
    if (padding > 0) {
        BufferedImage paddedImage = new BufferedImage(splitImage.getWidth() + padding * 2, splitImage.getHeight() + padding * 2, page.getType());
        Graphics2D g2 = paddedImage.createGraphics();
        g2.drawImage(splitImage, padding, padding, null);
        g2.dispose();
        return paddedImage;
    } else {
        return splitImage;
    }
}
