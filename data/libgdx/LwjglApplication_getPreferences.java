@Override
public Preferences getPreferences(String name) {
    if (preferences.containsKey(name)) {
        return preferences.get(name);
    } else {
        Preferences prefs = new LwjglPreferences(new LwjglFileHandle(new File(preferencesdir, name), preferencesFileType));
        preferences.put(name, prefs);
        return prefs;
    }
}
