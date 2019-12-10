private void flushBuilder() {
    if (mBuilder.length() > 0) {
        Log.v("GLSurfaceView", mBuilder.toString());
        mBuilder.delete(0, mBuilder.length());
    }
}
