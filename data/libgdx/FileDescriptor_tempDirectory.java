static public FileDescriptor tempDirectory(String prefix) {
    try {
        File file = File.createTempFile(prefix, null);
        if (!file.delete())
            throw new IOException("Unable to delete temp file: " + file);
        if (!file.mkdir())
            throw new IOException("Unable to create temp directory: " + file);
        return new FileDescriptor(file);
    } catch (IOException ex) {
        throw new RuntimeException("Unable to create temp file.", ex);
    }
}
