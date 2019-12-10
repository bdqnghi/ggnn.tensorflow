@Override
public Preferences putBoolean(String key, boolean val) {
    edit();
    editor.putBoolean(key, val);
    return this;
}
