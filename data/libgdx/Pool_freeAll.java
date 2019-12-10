/**
 * Puts the specified objects in the pool. Null objects within the array are silently ignored.
 * @see #free(Object)
 */
public void freeAll(Array<T> objects) {
    if (objects == null)
        throw new IllegalArgumentException("object cannot be null.");
    Array<T> freeObjects = this.freeObjects;
    int max = this.max;
    for (int i = 0; i < objects.size; i++) {
        T object = objects.get(i);
        if (object == null)
            continue;
        if (freeObjects.size < max)
            freeObjects.add(object);
        reset(object);
    }
    peak = Math.max(peak, freeObjects.size);
}
