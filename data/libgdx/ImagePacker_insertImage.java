/**
 * <p>
 * Inserts the given image. You can later on retrieve the images position in the output image via the supplied name and the
 * method {@link #getRects()}.
 * </p>
 *
 * @param name the name of the image
 * @param image the image
 * @throws RuntimeException in case the image did not fit or you specified a duplicate name
 */
public void insertImage(String name, BufferedImage image) {
    if (rects.containsKey(name))
        throw new RuntimeException("Key with name '" + name + "' is already in map");
    int borderPixels = padding + (duplicateBorder ? 1 : 0);
    borderPixels <<= 1;
    Rectangle rect = new Rectangle(0, 0, image.getWidth() + borderPixels, image.getHeight() + borderPixels);
    Node node = insert(root, rect);
    if (node == null)
        throw new RuntimeException("Image didn't fit");
    node.leaveName = name;
    rect = new Rectangle(node.rect);
    rect.width -= borderPixels;
    rect.height -= borderPixels;
    borderPixels >>= 1;
    rect.x += borderPixels;
    rect.y += borderPixels;
    rects.put(name, rect);
    Graphics2D g = this.image.createGraphics();
    g.drawImage(image, rect.x, rect.y, null);
    // not terribly efficient (as the rest of the code) but will do :p
    if (duplicateBorder) {
        g.drawImage(image, rect.x, rect.y - 1, rect.x + rect.width, rect.y, 0, 0, image.getWidth(), 1, null);
        g.drawImage(image, rect.x, rect.y + rect.height, rect.x + rect.width, rect.y + rect.height + 1, 0, image.getHeight() - 1, image.getWidth(), image.getHeight(), null);
        g.drawImage(image, rect.x - 1, rect.y, rect.x, rect.y + rect.height, 0, 0, 1, image.getHeight(), null);
        g.drawImage(image, rect.x + rect.width, rect.y, rect.x + rect.width + 1, rect.y + rect.height, image.getWidth() - 1, 0, image.getWidth(), image.getHeight(), null);
        g.drawImage(image, rect.x - 1, rect.y - 1, rect.x, rect.y, 0, 0, 1, 1, null);
        g.drawImage(image, rect.x + rect.width, rect.y - 1, rect.x + rect.width + 1, rect.y, image.getWidth() - 1, 0, image.getWidth(), 1, null);
        g.drawImage(image, rect.x - 1, rect.y + rect.height, rect.x, rect.y + rect.height + 1, 0, image.getHeight() - 1, 1, image.getHeight(), null);
        g.drawImage(image, rect.x + rect.width, rect.y + rect.height, rect.x + rect.width + 1, rect.y + rect.height + 1, image.getWidth() - 1, image.getHeight() - 1, image.getWidth(), image.getHeight(), null);
    }
    g.dispose();
}
