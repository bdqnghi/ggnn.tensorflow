/**
 * @return The existing instance for the specified pointer, or a newly created instance if the instance didn't exist
 */
public static btRigidBody getInstance(final long swigCPtr, boolean owner) {
    if (swigCPtr == 0)
        return null;
    btRigidBody result = getInstance(swigCPtr);
    if (result == null)
        result = new btRigidBody(swigCPtr, owner);
    return result;
}
