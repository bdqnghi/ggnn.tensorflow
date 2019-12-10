private void updatePpi() {
    DisplayMetrics metrics = new DisplayMetrics();
    app.getWindowManager().getDefaultDisplay().getMetrics(metrics);
    ppiX = metrics.xdpi;
    ppiY = metrics.ydpi;
    ppcX = metrics.xdpi / 2.54f;
    ppcY = metrics.ydpi / 2.54f;
    density = metrics.density;
}
