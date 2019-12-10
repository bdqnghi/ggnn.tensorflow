private void writePackFile(File outputDir, String scaledPackFileName, Array<Page> pages) throws IOException {
    File packFile = new File(outputDir, scaledPackFileName + settings.atlasExtension);
    File packDir = packFile.getParentFile();
    packDir.mkdirs();
    if (packFile.exists()) {
        // Make sure there aren't duplicate names.
        TextureAtlasData textureAtlasData = new TextureAtlasData(new FileHandle(packFile), new FileHandle(packFile), false);
        for (Page page : pages) {
            for (Rect rect : page.outputRects) {
                String rectName = Rect.getAtlasName(rect.name, settings.flattenPaths);
                for (Region region : textureAtlasData.getRegions()) {
                    if (region.name.equals(rectName)) {
                        throw new GdxRuntimeException("A region with the name \"" + rectName + "\" has already been packed: " + rect.name);
                    }
                }
            }
        }
    }
    FileWriter writer = new FileWriter(packFile, true);
    for (Page page : pages) {
        writer.write("\n" + page.imageName + "\n");
        writer.write("size: " + page.imageWidth + "," + page.imageHeight + "\n");
        writer.write("format: " + settings.format + "\n");
        writer.write("filter: " + settings.filterMin + "," + settings.filterMag + "\n");
        writer.write("repeat: " + getRepeatValue() + "\n");
        page.outputRects.sort();
        for (Rect rect : page.outputRects) {
            writeRect(writer, page, rect, rect.name);
            Array<Alias> aliases = new Array(rect.aliases.toArray());
            aliases.sort();
            for (Alias alias : aliases) {
                Rect aliasRect = new Rect();
                aliasRect.set(rect);
                alias.apply(aliasRect);
                writeRect(writer, page, aliasRect, alias.name);
            }
        }
    }
    writer.close();
}
