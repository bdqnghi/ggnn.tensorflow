public File file() {
    if (type == FileType.External)
        return new File(HeadlessFiles.externalPath, file.getPath());
    if (type == FileType.Local)
        return new File(HeadlessFiles.localPath, file.getPath());
    return file;
}
