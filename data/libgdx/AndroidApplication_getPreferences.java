@Override
public Preferences getPreferences(String name) {
    return new AndroidPreferences(getSharedPreferences(name, Context.MODE_PRIVATE));
}
