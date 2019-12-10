/**
 * Loads the tilesets
 * @param root the root XML element
 * @return a list of filenames for images containing tiles
 * @throws IOException
 */
protected Array<FileHandle> loadTilesets(Element root, FileHandle tmxFile) throws IOException {
    Array<FileHandle> images = new Array<FileHandle>();
    for (Element tileset : root.getChildrenByName("tileset")) {
        String source = tileset.getAttribute("source", null);
        if (source != null) {
            FileHandle tsxFile = getRelativeFileHandle(tmxFile, source);
            tileset = xml.parse(tsxFile);
            Element imageElement = tileset.getChildByName("image");
            if (imageElement != null) {
                String imageSource = tileset.getChildByName("image").getAttribute("source");
                FileHandle image = getRelativeFileHandle(tsxFile, imageSource);
                images.add(image);
            } else {
                for (Element tile : tileset.getChildrenByName("tile")) {
                    String imageSource = tile.getChildByName("image").getAttribute("source");
                    FileHandle image = getRelativeFileHandle(tsxFile, imageSource);
                    images.add(image);
                }
            }
        } else {
            Element imageElement = tileset.getChildByName("image");
            if (imageElement != null) {
                String imageSource = tileset.getChildByName("image").getAttribute("source");
                FileHandle image = getRelativeFileHandle(tmxFile, imageSource);
                images.add(image);
            } else {
                for (Element tile : tileset.getChildrenByName("tile")) {
                    String imageSource = tile.getChildByName("image").getAttribute("source");
                    FileHandle image = getRelativeFileHandle(tmxFile, imageSource);
                    images.add(image);
                }
            }
        }
    }
    return images;
}
