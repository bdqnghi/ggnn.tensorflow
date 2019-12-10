public float getAllowedPenetration() {
    return CollisionJNI.btConvexCast_CastResult_allowedPenetration_get(swigCPtr, this);
}
