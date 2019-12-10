/**
 * Loads the native Bullet native library and initializes the gdx-bullet extension. Must be called before any of the bullet
 * classes/methods can be used.
 * @param useRefCounting Whether to use reference counting, causing object to be destroyed when no longer referenced. You must
 *           use {@link BulletBase#obtain()} and {@link BulletBase#release()} when using reference counting.
 * @param logging Whether to log an error on potential errors in the application.
 */
public static void init(boolean useRefCounting, boolean logging) {
    Bullet.useRefCounting = useRefCounting;
    Bullet.enableLogging = logging;
    new SharedLibraryLoader().load("gdx-bullet");
    final int version = LinearMath.btGetVersion();
    if (version != VERSION)
        throw new GdxRuntimeException("Bullet binaries version (" + version + ") does not match source version (" + VERSION + ")");
}
