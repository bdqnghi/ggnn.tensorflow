/**
 * Release a previously obtained reference, causing the object to be disposed when this was the last reference.
 */
public void release() {
    if (--refCount <= 0 && Bullet.useRefCounting)
        dispose();
}
