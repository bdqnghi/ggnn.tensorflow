protected void hideStatusBar(boolean hide) {
    if (!hide || getVersion() < 11)
        return;
    View rootView = getWindow().getDecorView();
    try {
        Method m = View.class.getMethod("setSystemUiVisibility", int.class);
        if (getVersion() <= 13)
            m.invoke(rootView, 0x0);
        m.invoke(rootView, 0x1);
    } catch (Exception e) {
        log("AndroidApplication", "Can't hide status bar", e);
    }
}
