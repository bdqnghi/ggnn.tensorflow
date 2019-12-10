public Matrix4 getWorldTransform() {
    return CollisionJNI.btCollisionObjectWrapper_worldTransform_get(swigCPtr, this);
}
