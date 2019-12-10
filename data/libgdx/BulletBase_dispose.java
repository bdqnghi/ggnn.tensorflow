@Override
public void dispose() {
    if (refCount > 0 && Bullet.useRefCounting && Bullet.enableLogging)
        Gdx.app.error("Bullet", "Disposing " + toString() + " while it still has " + refCount + " references.");
    disposed = true;
    delete();
}
