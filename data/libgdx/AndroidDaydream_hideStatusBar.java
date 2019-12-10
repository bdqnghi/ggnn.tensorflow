protected void hideStatusBar(AndroidApplicationConfiguration config) {
    if (!config.hideStatusBar || getVersion() < 11)
        return;
    View rootView = getWindow().getDecorView();
    try {
        Method m = View.class.getMethod("setSystemUiVisibility", int.class);
        m.invoke(rootView, 0x0);
        m.invoke(rootView, 0x1);
    } catch (Exception e) {
        log("AndroidApplication", "Can't hide status bar", e);
    }
}
