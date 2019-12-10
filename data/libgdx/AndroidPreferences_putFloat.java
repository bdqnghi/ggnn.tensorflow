@Override
public Preferences putFloat(String key, float val) {
    edit();
    editor.putFloat(key, val);
    return this;
}
