static private void copyFile(FileWrapper source, FileWrapper dest) {
    try {
        dest.write(source.read(), false);
    } catch (Exception ex) {
        throw new GdxRuntimeException(// 
        "Error copying source file: " + source.file + " (" + source.type + ")\n" + "To destination: " + dest.file + " (" + dest.type + ")", ex);
    }
}
