public int Classify(Vector3 n, float o, int s) {
    return CollisionJNI.btDbvtAabbMm_Classify(swigCPtr, this, n, o, s);
}
