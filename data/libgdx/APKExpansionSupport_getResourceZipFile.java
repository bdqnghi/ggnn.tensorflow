static public ZipResourceFile getResourceZipFile(String[] expansionFiles) throws IOException {
    ZipResourceFile apkExpansionFile = null;
    for (String expansionFilePath : expansionFiles) {
        if (null == apkExpansionFile) {
            apkExpansionFile = new ZipResourceFile(expansionFilePath);
        } else {
            apkExpansionFile.addPatchFile(expansionFilePath);
        }
    }
    return apkExpansionFile;
}
