/**
 * Obtains a temporary instance, used for callback methods with one or more btManifoldPoint arguments
 */
protected static btManifoldPoint obtainForArgument(final long swigCPtr, boolean owner) {
    btManifoldPoint instance = argumentInstances[argumentIndex = (argumentIndex + 1) & 3];
    instance.reset(swigCPtr, owner);
    return instance;
}
