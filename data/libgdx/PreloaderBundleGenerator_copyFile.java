private void copyFile(FileWrapper source, FileWrapper dest, AssetFilter filter, ArrayList<Asset> assets) {
    if (!filter.accept(dest.path(), false))
        return;
    try {
        assets.add(new Asset(dest, filter.getType(dest.path())));
        dest.write(source.read(), false);
    } catch (Exception ex) {
        throw new GdxRuntimeException(// 
        "Error copying source file: " + source + "\n" + "To destination: " + dest, ex);
    }
}
