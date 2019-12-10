/**
 * Returns an object from this pool. The object may be new (from {@link #newObject()}) or reused (previously
 * {@link #free(Object) freed}).
 */
public T obtain() {
    return freeObjects.size == 0 ? newObject() : freeObjects.pop();
}
