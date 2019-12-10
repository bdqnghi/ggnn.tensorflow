@TargetApi(19)
@Override
public void useImmersiveMode(boolean use) {
    if (!use || getVersion() < Build.VERSION_CODES.KITKAT)
        return;
    try {
        View view = this.graphics.getView();
        Method m = View.class.getMethod("setSystemUiVisibility", int.class);
        int code = View.SYSTEM_UI_FLAG_LAYOUT_STABLE | View.SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION | View.SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN | View.SYSTEM_UI_FLAG_HIDE_NAVIGATION | View.SYSTEM_UI_FLAG_FULLSCREEN | View.SYSTEM_UI_FLAG_IMMERSIVE_STICKY;
        m.invoke(view, code);
    } catch (Exception e) {
        log("AndroidApplication", "Failed to setup immersive mode, a throwable has occurred.", e);
    }
}
