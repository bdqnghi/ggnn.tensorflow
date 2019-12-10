@Override
public FileHandle parent() {
    File parent = file.getParentFile();
    if (parent == null)
        parent = new File("");
    return new AndroidZipFileHandle(parent.getPath());
}
