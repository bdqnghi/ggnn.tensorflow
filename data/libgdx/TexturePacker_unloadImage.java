/**
 * Clears the image for this rect, which will be loaded from the specified file by {@link #getImage(ImageProcessor)}.
 */
public void unloadImage(File file) {
    this.file = file;
    image = null;
}
