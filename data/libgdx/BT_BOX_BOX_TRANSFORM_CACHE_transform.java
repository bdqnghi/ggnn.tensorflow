public Vector3 transform(Vector3 point) {
    return CollisionJNI.BT_BOX_BOX_TRANSFORM_CACHE_transform(swigCPtr, this, point);
}
