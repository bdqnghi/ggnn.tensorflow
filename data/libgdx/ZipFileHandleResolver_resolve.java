@Override
public FileHandle resolve(String fileName) {
    return new AndroidZipFileHandle(fileName);
}
