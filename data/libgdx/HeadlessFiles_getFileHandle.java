@Override
public FileHandle getFileHandle(String fileName, FileType type) {
    return new HeadlessFileHandle(fileName, type);
}
