@Override
public DisplayMode getDesktopDisplayMode() {
    DisplayMetrics metrics = new DisplayMetrics();
    app.getWindowManager().getDefaultDisplay().getMetrics(metrics);
    return new AndroidDisplayMode(metrics.widthPixels, metrics.heightPixels, 0, 0);
}
