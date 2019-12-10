/**
 * Called when an object is freed to clear the state of the object for possible later reuse. The default implementation calls
 * {@link Poolable#reset()} if the object is {@link Poolable}.
 */
protected void reset(T object) {
    if (object instanceof Poolable)
        ((Poolable) object).reset();
}
