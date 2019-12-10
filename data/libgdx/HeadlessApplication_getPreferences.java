@Override
public Preferences getPreferences(String name) {
    if (preferences.containsKey(name)) {
        return preferences.get(name);
    } else {
        Preferences prefs = new HeadlessPreferences(name, this.preferencesdir);
        preferences.put(name, prefs);
        return prefs;
    }
}
