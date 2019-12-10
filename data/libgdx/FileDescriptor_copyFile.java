static private void copyFile(FileDescriptor source, FileDescriptor dest) {
    try {
        dest.write(source.read(), false);
    } catch (Exception ex) {
        throw new RuntimeException(// 
        "Error copying source file: " + source.file + " (" + source.type + ")\n" + "To destination: " + dest.file + " (" + dest.type + ")", ex);
    }
}
