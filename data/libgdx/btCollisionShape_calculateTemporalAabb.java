public void calculateTemporalAabb(Matrix4 curTrans, Vector3 linvel, Vector3 angvel, float timeStep, Vector3 temporalAabbMin, Vector3 temporalAabbMax) {
    CollisionJNI.btCollisionShape_calculateTemporalAabb(swigCPtr, this, curTrans, linvel, angvel, timeStep, temporalAabbMin, temporalAabbMax);
}
