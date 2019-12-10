public btTransform getTransformA() {
    long cPtr = CollisionJNI.btDiscreteCollisionDetectorInterface_ClosestPointInput_transformA_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btTransform(cPtr, false);
}
