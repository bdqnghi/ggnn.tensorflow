@Override
public File file() {
    if (type == FileType.Internal)
        return new File(IOSFiles.internalPath, file.getPath());
    if (type == FileType.External)
        return new File(IOSFiles.externalPath, file.getPath());
    if (type == FileType.Local)
        return new File(IOSFiles.localPath, file.getPath());
    return file;
}
