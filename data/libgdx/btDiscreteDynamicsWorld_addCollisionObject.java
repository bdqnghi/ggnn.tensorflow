public void addCollisionObject(btCollisionObject collisionObject) {
    DynamicsJNI.btDiscreteDynamicsWorld_addCollisionObject__SWIG_2(swigCPtr, this, btCollisionObject.getCPtr(collisionObject), collisionObject);
}
