private void initialize() {
    path = file.getPath().replace('\\', '/');
    expansionFile = ((AndroidFiles) Gdx.files).getExpansionFile();
    assetFd = expansionFile.getAssetFileDescriptor(getPath());
    // needed for listing entries and exists() of directories
    if (isDirectory())
        path += "/";
}
