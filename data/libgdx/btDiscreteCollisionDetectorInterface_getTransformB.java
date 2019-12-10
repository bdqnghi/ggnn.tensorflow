public btTransform getTransformB() {
    long cPtr = CollisionJNI.btDiscreteCollisionDetectorInterface_ClosestPointInput_transformB_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btTransform(cPtr, false);
}
