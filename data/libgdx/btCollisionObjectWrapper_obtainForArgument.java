/**
 * Obtains a temporary instance, used for callback methods with one or more btManifoldPoint arguments
 */
protected static btCollisionObjectWrapper obtainForArgument(final long swigCPtr, boolean owner) {
    btCollisionObjectWrapper instance = argumentInstances[argumentIndex = (argumentIndex + 1) & 3];
    instance.reset(swigCPtr, owner);
    return instance;
}
