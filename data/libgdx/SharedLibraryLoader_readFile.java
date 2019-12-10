private InputStream readFile(String path) {
    if (nativesJar == null) {
        InputStream input = SharedLibraryLoader.class.getResourceAsStream("/" + path);
        if (input == null)
            throw new GdxRuntimeException("Unable to read file for extraction: " + path);
        return input;
    }
    // Read from JAR.
    try {
        ZipFile file = new ZipFile(nativesJar);
        ZipEntry entry = file.getEntry(path);
        if (entry == null)
            throw new GdxRuntimeException("Couldn't find '" + path + "' in JAR: " + nativesJar);
        return file.getInputStream(entry);
    } catch (IOException ex) {
        throw new GdxRuntimeException("Error reading '" + path + "' in JAR: " + nativesJar, ex);
    }
}
