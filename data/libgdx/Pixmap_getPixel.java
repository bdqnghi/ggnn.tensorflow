/**
 * Returns the 32-bit RGBA8888 value of the pixel at x, y. For Alpha formats the RGB components will be one.
 *
 * @param x The x-coordinate
 * @param y The y-coordinate
 * @return The pixel color in RGBA8888 format.
 */
public int getPixel(int x, int y) {
    if (pixels == null)
        pixels = context.getImageData(0, 0, width, height).getData();
    int i = x * 4 + y * width * 4;
    int r = pixels.get(i + 0) & 0xff;
    int g = pixels.get(i + 1) & 0xff;
    int b = pixels.get(i + 2) & 0xff;
    int a = pixels.get(i + 3) & 0xff;
    return (r << 24) | (g << 16) | (b << 8) | (a);
}
