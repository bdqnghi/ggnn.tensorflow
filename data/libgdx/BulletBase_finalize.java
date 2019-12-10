@Override
protected void finalize() throws Throwable {
    if (!destroyed && Bullet.enableLogging)
        Gdx.app.error("Bullet", "The " + className + " class does not override the finalize method.");
    super.finalize();
}
