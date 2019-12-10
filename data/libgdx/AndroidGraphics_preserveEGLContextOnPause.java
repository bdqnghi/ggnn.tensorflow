protected void preserveEGLContextOnPause() {
    int sdkVersion = android.os.Build.VERSION.SDK_INT;
    if ((sdkVersion >= 11 && view instanceof GLSurfaceView20) || view instanceof GLSurfaceView20API18) {
        try {
            view.getClass().getMethod("setPreserveEGLContextOnPause", boolean.class).invoke(view, true);
        } catch (Exception e) {
            Gdx.app.log(LOG_TAG, "Method GLSurfaceView.setPreserveEGLContextOnPause not found");
        }
    }
}
