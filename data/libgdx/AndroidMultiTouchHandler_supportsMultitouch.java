public boolean supportsMultitouch(Context activity) {
    return activity.getPackageManager().hasSystemFeature("android.hardware.touchscreen.multitouch");
}
