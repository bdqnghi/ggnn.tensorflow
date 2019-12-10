/**
 * Loads the tilesets
 * @param root the root XML element
 * @return a list of filenames for images containing tiles
 * @throws IOException
 */
private Array<FileHandle> loadTileSheets(Element root, FileHandle tideFile) throws IOException {
    Array<FileHandle> images = new Array<FileHandle>();
    Element tilesheets = root.getChildByName("TileSheets");
    for (Element tileset : tilesheets.getChildrenByName("TileSheet")) {
        Element imageSource = tileset.getChildByName("ImageSource");
        FileHandle image = getRelativeFileHandle(tideFile, imageSource.getText());
        images.add(image);
    }
    return images;
}
