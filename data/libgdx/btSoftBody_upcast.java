public static btSoftBody upcast(btCollisionObject colObj) {
    long cPtr = SoftbodyJNI.btSoftBody_upcast__SWIG_0(btCollisionObject.getCPtr(colObj), colObj);
    return (cPtr == 0) ? null : new btSoftBody(cPtr, false);
}
