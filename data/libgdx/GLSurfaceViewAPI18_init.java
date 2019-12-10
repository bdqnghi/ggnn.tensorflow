private void init() {
    // Install a SurfaceHolder.Callback so we get notified when the
    // underlying surface is created and destroyed
    SurfaceHolder holder = getHolder();
    holder.addCallback(this);
    int sdkVersion = android.os.Build.VERSION.SDK_INT;
    // setFormat is done by SurfaceView in SDK 2.3 and newer.
    if (sdkVersion <= 8) {
        // SDK 2.2 or older
        holder.setFormat(PixelFormat.RGB_565);
    }
// setType is not needed for SDK 2.0 or newer. Uncomment this
// statement if back-porting this code to older SDKs.
// holder.setType(SurfaceHolder.SURFACE_TYPE_GPU);
}
