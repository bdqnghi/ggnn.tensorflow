private InputStream getFromJar(String jarFile, String sharedLibrary) throws IOException {
    ZipFile file = new ZipFile(nativesJar);
    ZipEntry entry = file.getEntry(sharedLibrary);
    return file.getInputStream(entry);
}
