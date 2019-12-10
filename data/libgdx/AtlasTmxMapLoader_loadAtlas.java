/**
 * May return null.
 */
protected FileHandle loadAtlas(Element root, FileHandle tmxFile) throws IOException {
    Element e = root.getChildByName("properties");
    if (e != null) {
        for (Element property : e.getChildrenByName("property")) {
            String name = property.getAttribute("name", null);
            String value = property.getAttribute("value", null);
            if (name.equals("atlas")) {
                if (value == null) {
                    value = property.getText();
                }
                if (value == null || value.length() == 0) {
                    // keep trying until there are no more atlas properties
                    continue;
                }
                return getRelativeFileHandle(tmxFile, value);
            }
        }
    }
    FileHandle atlasFile = tmxFile.sibling(tmxFile.nameWithoutExtension() + ".atlas");
    return atlasFile.exists() ? atlasFile : null;
}
