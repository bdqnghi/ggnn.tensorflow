public boolean Contain(btDbvtAabbMm a) {
    return CollisionJNI.btDbvtAabbMm_Contain(swigCPtr, this, btDbvtAabbMm.getCPtr(a), a);
}
