/**
 * Returns a rect for the image describing the texture region to be packed, or null if the image should not be packed.
 */
Rect processImage(BufferedImage image, String name) {
    if (scale <= 0)
        throw new IllegalArgumentException("scale cannot be <= 0: " + scale);
    int width = image.getWidth(), height = image.getHeight();
    if (image.getType() != BufferedImage.TYPE_4BYTE_ABGR) {
        BufferedImage newImage = new BufferedImage(width, height, BufferedImage.TYPE_4BYTE_ABGR);
        newImage.getGraphics().drawImage(image, 0, 0, null);
        image = newImage;
    }
    boolean isPatch = name.endsWith(".9");
    int[] splits = null, pads = null;
    Rect rect = null;
    if (isPatch) {
        // Strip ".9" from file name, read ninepatch split pixels, and strip ninepatch split pixels.
        name = name.substring(0, name.length() - 2);
        splits = getSplits(image, name);
        pads = getPads(image, name, splits);
        // Strip split pixels.
        width -= 2;
        height -= 2;
        BufferedImage newImage = new BufferedImage(width, height, BufferedImage.TYPE_4BYTE_ABGR);
        newImage.getGraphics().drawImage(image, 0, 0, width, height, 1, 1, width + 1, height + 1, null);
        image = newImage;
    }
    // Scale image.
    if (scale != 1) {
        int originalWidth = width, originalHeight = height;
        width = Math.round(width * scale);
        height = Math.round(height * scale);
        BufferedImage newImage = new BufferedImage(width, height, BufferedImage.TYPE_4BYTE_ABGR);
        if (scale < 1) {
            newImage.getGraphics().drawImage(image.getScaledInstance(width, height, Image.SCALE_AREA_AVERAGING), 0, 0, null);
        } else {
            Graphics2D g = (Graphics2D) newImage.getGraphics();
            g.setRenderingHint(RenderingHints.KEY_RENDERING, RenderingHints.VALUE_RENDER_QUALITY);
            g.setRenderingHint(RenderingHints.KEY_INTERPOLATION, RenderingHints.VALUE_INTERPOLATION_BICUBIC);
            g.drawImage(image, 0, 0, width, height, null);
        }
        image = newImage;
    }
    if (isPatch) {
        // Ninepatches aren't rotated or whitespace stripped.
        rect = new Rect(image, 0, 0, width, height, true);
        rect.splits = splits;
        rect.pads = pads;
        rect.canRotate = false;
    } else {
        rect = stripWhitespace(image);
        if (rect == null)
            return null;
    }
    // Strip digits off end of name and use as index.
    int index = -1;
    if (settings.useIndexes) {
        Matcher matcher = indexPattern.matcher(name);
        if (matcher.matches()) {
            name = matcher.group(1);
            index = Integer.parseInt(matcher.group(2));
        }
    }
    rect.name = name;
    rect.index = index;
    return rect;
}
