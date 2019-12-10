public InputStream read() {
    if (type == FileType.Internal) {
        try {
            return assets.open(file.getPath());
        } catch (IOException ex) {
            throw new GdxRuntimeException("Error reading file: " + file + " (" + type + ")", ex);
        }
    }
    return super.read();
}
