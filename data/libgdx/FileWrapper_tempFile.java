static public FileWrapper tempFile(String prefix) {
    try {
        return new FileWrapper(File.createTempFile(prefix, null));
    } catch (IOException ex) {
        throw new GdxRuntimeException("Unable to create temp file.", ex);
    }
}
