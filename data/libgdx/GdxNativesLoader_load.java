/**
 * Loads the libgdx native libraries if they have not already been loaded.
 */
static public synchronized void load() {
    if (nativesLoaded)
        return;
    nativesLoaded = true;
    if (disableNativesLoading) {
        System.out.println("Native loading is disabled.");
        return;
    }
    new SharedLibraryLoader().load("gdx");
}
