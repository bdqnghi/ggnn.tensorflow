@Override
public Preferences putInteger(String key, int val) {
    edit();
    editor.putInt(key, val);
    return this;
}
