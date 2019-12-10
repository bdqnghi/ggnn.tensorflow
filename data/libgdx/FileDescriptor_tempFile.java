static public FileDescriptor tempFile(String prefix) {
    try {
        return new FileDescriptor(File.createTempFile(prefix, null));
    } catch (IOException ex) {
        throw new RuntimeException("Unable to create temp file.", ex);
    }
}
