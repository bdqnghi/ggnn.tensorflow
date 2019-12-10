protected void destroy() {
    try {
        if (destroyed && Bullet.enableLogging)
            Gdx.app.error("Bullet", "Already destroyed " + toString());
        destroyed = true;
        if (swigCMemOwn && !disposed) {
            if (Bullet.enableLogging)
                Gdx.app.error("Bullet", "Disposing " + toString() + " due to garbage collection.");
            dispose();
        }
    } catch (Throwable e) {
        Gdx.app.error("Bullet", "Exception while destroying " + toString(), e);
    }
}
