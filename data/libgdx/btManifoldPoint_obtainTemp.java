/**
 * Obtains a temporary instance, used by native methods that return a btManifoldPoint instance
 */
protected static btManifoldPoint obtainTemp(long cPtr, boolean own) {
    temp.reset(cPtr, own);
    return temp;
}
