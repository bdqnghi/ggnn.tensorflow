public void create() {
    Preferences prefs = Gdx.app.getPreferences(".test");
    if (prefs.contains("bool")) {
        if (prefs.getBoolean("bool") != true)
            throw new GdxRuntimeException("bool failed");
        if (prefs.getInteger("int") != 1234)
            throw new GdxRuntimeException("int failed");
        if (prefs.getLong("long") != Long.MAX_VALUE)
            throw new GdxRuntimeException("long failed");
        if (prefs.getFloat("float") != 1.2345f)
            throw new GdxRuntimeException("float failed");
        if (!prefs.getString("string").equals("test!"))
            throw new GdxRuntimeException("string failed");
    }
    prefs.clear();
    prefs.putBoolean("bool", true);
    prefs.putInteger("int", 1234);
    prefs.putLong("long", Long.MAX_VALUE);
    prefs.putFloat("float", 1.2345f);
    prefs.putString("string", "test!");
    prefs.flush();
    if (prefs.getBoolean("bool") != true)
        throw new GdxRuntimeException("bool failed");
    if (prefs.getInteger("int") != 1234)
        throw new GdxRuntimeException("int failed");
    if (prefs.getLong("long") != Long.MAX_VALUE)
        throw new GdxRuntimeException("long failed");
    if (prefs.getFloat("float") != 1.2345f)
        throw new GdxRuntimeException("float failed");
    if (!prefs.getString("string").equals("test!"))
        throw new GdxRuntimeException("string failed");
}
