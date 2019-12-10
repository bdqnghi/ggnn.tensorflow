/**
 * @return Whether this instance is obtained using the {@link #obtain()} method.
 */
public boolean isObtained() {
    return refCount > 0;
}
