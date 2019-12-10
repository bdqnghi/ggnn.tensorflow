@Override
public void onSurfaceChanged(javax.microedition.khronos.opengles.GL10 gl, int width, int height) {
    this.width = width;
    this.height = height;
    updatePpi();
    gl.glViewport(0, 0, this.width, this.height);
    if (created == false) {
        app.getApplicationListener().create();
        created = true;
        synchronized (this) {
            running = true;
        }
    }
    app.getApplicationListener().resize(width, height);
}
