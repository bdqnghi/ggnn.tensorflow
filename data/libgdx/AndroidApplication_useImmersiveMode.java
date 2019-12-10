@TargetApi(19)
@Override
public void useImmersiveMode(boolean use) {
    if (!use || getVersion() < Build.VERSION_CODES.KITKAT)
        return;
    View view = getWindow().getDecorView();
    try {
        Method m = View.class.getMethod("setSystemUiVisibility", int.class);
        int code = View.SYSTEM_UI_FLAG_LAYOUT_STABLE | View.SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION | View.SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN | View.SYSTEM_UI_FLAG_HIDE_NAVIGATION | View.SYSTEM_UI_FLAG_FULLSCREEN | View.SYSTEM_UI_FLAG_IMMERSIVE_STICKY;
        m.invoke(view, code);
    } catch (Exception e) {
        log("AndroidApplication", "Can't set immersive mode", e);
    }
}
