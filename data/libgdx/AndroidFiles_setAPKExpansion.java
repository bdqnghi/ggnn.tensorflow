/**
 * This method can be called to set the version code of the APK expansion
 * file(s) used by the application
 *
 * @param mainVersion
 *            - version code of the main expansion file
 * @param patchVersion
 *            - version code of the patch expansion file
 *
 * @return true if the APK expansion file could be opened, false otherwise
 */
public boolean setAPKExpansion(int mainVersion, int patchVersion) {
    try {
        expansionFile = APKExpansionSupport.getAPKExpansionZipFile(((AndroidApplication) Gdx.app).getBaseContext(), mainVersion, patchVersion);
    } catch (IOException ex) {
        throw new GdxRuntimeException("APK expansion main version " + mainVersion + " or patch version " + patchVersion + " couldn't be opened!");
    }
    return expansionFile != null;
}
