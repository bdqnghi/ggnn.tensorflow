@Override
public Preferences putString(String key, String val) {
    edit();
    editor.putString(key, val);
    return this;
}
