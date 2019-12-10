@Override
public InputStream read() {
    InputStream input = null;
    try {
        input = expansionFile.getInputStream(getPath());
    } catch (IOException ex) {
        throw new GdxRuntimeException("Error reading file: " + file + " (ZipResourceFile)", ex);
    }
    return input;
}
