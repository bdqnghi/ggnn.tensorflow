/**
 * Reuses a previous freed instance or creates a new instance and set it to reflect the specified native object
 */
public static btBroadphasePair obtain(long cPtr, boolean own) {
    final btBroadphasePair result = pool.obtain();
    result.reset(cPtr, own);
    return result;
}
