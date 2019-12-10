public File file() {
    if (type == FileType.External)
        return new File(LwjglFiles.externalPath, file.getPath());
    if (type == FileType.Local)
        return new File(LwjglFiles.localPath, file.getPath());
    return file;
}
