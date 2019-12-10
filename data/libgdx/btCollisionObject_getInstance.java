/**
 * @return The existing instance for the specified pointer, or a newly created instance if the instance didn't exist
 */
public static btCollisionObject getInstance(final long swigCPtr, boolean owner) {
    if (swigCPtr == 0)
        return null;
    btCollisionObject result = instances.get(swigCPtr);
    if (result == null)
        result = new btCollisionObject(swigCPtr, owner);
    return result;
}
