public void setBodies(btCollisionObject body0, btCollisionObject body1) {
    CollisionJNI.btPersistentManifold_setBodies(swigCPtr, this, btCollisionObject.getCPtr(body0), body0, btCollisionObject.getCPtr(body1), body1);
}
