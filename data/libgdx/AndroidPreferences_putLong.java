@Override
public Preferences putLong(String key, long val) {
    edit();
    editor.putLong(key, val);
    return this;
}
