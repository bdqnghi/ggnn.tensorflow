public File file() {
    if (type == FileType.Local)
        return new File(Gdx.files.getLocalStoragePath(), file.getPath());
    return super.file();
}
