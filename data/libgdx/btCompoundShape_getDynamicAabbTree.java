public btDbvt getDynamicAabbTree() {
    long cPtr = CollisionJNI.btCompoundShape_getDynamicAabbTree__SWIG_0(swigCPtr, this);
    return (cPtr == 0) ? null : new btDbvt(cPtr, false);
}
