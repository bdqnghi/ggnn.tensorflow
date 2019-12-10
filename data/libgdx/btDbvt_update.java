public boolean update(btDbvtNode leaf, btDbvtAabbMm volume, float margin) {
    return CollisionJNI.btDbvt_update__SWIG_5(swigCPtr, this, btDbvtNode.getCPtr(leaf), leaf, btDbvtAabbMm.getCPtr(volume), volume, margin);
}
