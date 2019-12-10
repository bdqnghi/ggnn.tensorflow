public btManifoldPoint getContactPoint(int index) {
    return new btManifoldPoint(CollisionJNI.btPersistentManifold_getContactPoint__SWIG_0(swigCPtr, this, index), false);
}
