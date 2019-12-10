public void collideSingleContact(Quaternion perturbeRot, btCollisionObjectWrapper body0Wrap, btCollisionObjectWrapper body1Wrap, btDispatcherInfo dispatchInfo, btManifoldResult resultOut) {
    CollisionJNI.btConvexPlaneCollisionAlgorithm_collideSingleContact(swigCPtr, this, perturbeRot, btCollisionObjectWrapper.getCPtr(body0Wrap), body0Wrap, btCollisionObjectWrapper.getCPtr(body1Wrap), body1Wrap, btDispatcherInfo.getCPtr(dispatchInfo), dispatchInfo, btManifoldResult.getCPtr(resultOut), resultOut);
}
