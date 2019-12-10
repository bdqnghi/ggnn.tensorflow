public float ProjectMinimum(Vector3 v, long signs) {
    return CollisionJNI.btDbvtAabbMm_ProjectMinimum(swigCPtr, this, v, signs);
}
