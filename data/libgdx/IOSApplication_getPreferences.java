@Override
public Preferences getPreferences(String name) {
    File libraryPath = new File(System.getenv("HOME"), "Library");
    File finalPath = new File(libraryPath, name + ".plist");
    @SuppressWarnings("unchecked")
    NSMutableDictionary<NSString, NSObject> nsDictionary = (NSMutableDictionary<NSString, NSObject>) NSMutableDictionary.read(finalPath);
    // if it fails to get an existing dictionary, create a new one.
    if (nsDictionary == null) {
        nsDictionary = new NSMutableDictionary<NSString, NSObject>();
        nsDictionary.write(finalPath, false);
    }
    return new IOSPreferences(nsDictionary, finalPath.getAbsolutePath());
}
