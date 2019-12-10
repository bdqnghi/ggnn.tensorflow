public void aabbTest(Vector3 aabbMin, Vector3 aabbMax, btBroadphaseAabbCallback callback) {
    CollisionJNI.btBroadphaseInterface_aabbTest(swigCPtr, this, aabbMin, aabbMax, btBroadphaseAabbCallback.getCPtr(callback), callback);
}
