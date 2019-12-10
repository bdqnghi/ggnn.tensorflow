public float[] getPlane() {
    return CollisionJNI.btFace_plane_get(swigCPtr, this);
}
