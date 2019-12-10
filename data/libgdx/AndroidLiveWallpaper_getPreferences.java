@Override
public Preferences getPreferences(String name) {
    return new AndroidPreferences(service.getSharedPreferences(name, Context.MODE_PRIVATE));
}
