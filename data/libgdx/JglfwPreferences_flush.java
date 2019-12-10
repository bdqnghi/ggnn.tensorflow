public void flush() {
    OutputStream out = null;
    try {
        out = new BufferedOutputStream(file.write(false));
        properties.store(out, null);
    } catch (Exception ex) {
        throw new GdxRuntimeException("Error writing preferences: " + file, ex);
    } finally {
        StreamUtils.closeQuietly(out);
    }
}
