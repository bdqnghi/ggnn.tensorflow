public static btGhostObject upcast(btCollisionObject colObj) {
    long cPtr = CollisionJNI.btGhostObject_upcast__SWIG_0(btCollisionObject.getCPtr(colObj), colObj);
    return (cPtr == 0) ? null : new btGhostObject(cPtr, false);
}
