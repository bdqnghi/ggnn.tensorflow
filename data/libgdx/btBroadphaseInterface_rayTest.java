public void rayTest(Vector3 rayFrom, Vector3 rayTo, btBroadphaseRayCallback rayCallback) {
    CollisionJNI.btBroadphaseInterface_rayTest__SWIG_2(swigCPtr, this, rayFrom, rayTo, btBroadphaseRayCallback.getCPtr(rayCallback), rayCallback);
}
