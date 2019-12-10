/**
 * Loads the images in image layers
 * @param root the root XML element
 * @return a list of filenames for images inside image layers
 * @throws IOException
 */
protected Array<FileHandle> loadImages(Element root, FileHandle tmxFile) throws IOException {
    Array<FileHandle> images = new Array<FileHandle>();
    for (Element imageLayer : root.getChildrenByName("imagelayer")) {
        Element image = imageLayer.getChildByName("image");
        String source = image.getAttribute("source", null);
        if (source != null) {
            FileHandle handle = getRelativeFileHandle(tmxFile, source);
            if (!images.contains(handle, false)) {
                images.add(handle);
            }
        }
    }
    return images;
}
