static public ZipResourceFile getAPKExpansionZipFile(Context ctx, int mainVersion, int patchVersion) throws IOException {
    String[] expansionFiles = getAPKExpansionFiles(ctx, mainVersion, patchVersion);
    return getResourceZipFile(expansionFiles);
}
