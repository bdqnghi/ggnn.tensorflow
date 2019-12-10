private void copyDirectory(FileWrapper sourceDir, FileWrapper destDir, AssetFilter filter, ArrayList<Asset> assets) {
    if (!filter.accept(destDir.path(), true))
        return;
    assets.add(new Asset(destDir, AssetType.Directory));
    destDir.mkdirs();
    FileWrapper[] files = sourceDir.list();
    for (int i = 0, n = files.length; i < n; i++) {
        FileWrapper srcFile = files[i];
        FileWrapper destFile = destDir.child(srcFile.name());
        if (srcFile.isDirectory())
            copyDirectory(srcFile, destFile, filter, assets);
        else
            copyFile(srcFile, destFile, filter, assets);
    }
}
