@Override
public Preferences getPreferences(String name) {
    Preferences pref = prefs.get(name);
    if (pref == null) {
        pref = new GwtPreferences(name);
        prefs.put(name, pref);
    }
    return pref;
}
