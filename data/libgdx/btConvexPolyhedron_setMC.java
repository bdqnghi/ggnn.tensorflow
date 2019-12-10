public void setMC(btVector3 value) {
    CollisionJNI.btConvexPolyhedron_mC_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
