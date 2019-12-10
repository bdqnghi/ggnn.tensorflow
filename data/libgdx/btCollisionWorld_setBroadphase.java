public void setBroadphase(btBroadphaseInterface pairCache) {
    CollisionJNI.btCollisionWorld_setBroadphase(swigCPtr, this, btBroadphaseInterface.getCPtr(pairCache), pairCache);
}
