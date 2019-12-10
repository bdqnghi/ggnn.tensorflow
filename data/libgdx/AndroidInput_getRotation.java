@Override
public int getRotation() {
    int orientation = 0;
    if (context instanceof Activity) {
        orientation = ((Activity) context).getWindowManager().getDefaultDisplay().getRotation();
    } else {
        orientation = ((WindowManager) context.getSystemService(Context.WINDOW_SERVICE)).getDefaultDisplay().getRotation();
    }
    switch(orientation) {
        case Surface.ROTATION_0:
            return 0;
        case Surface.ROTATION_90:
            return 90;
        case Surface.ROTATION_180:
            return 180;
        case Surface.ROTATION_270:
            return 270;
        default:
            return 0;
    }
}
