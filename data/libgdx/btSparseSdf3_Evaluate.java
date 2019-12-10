public float Evaluate(Vector3 x, btCollisionShape shape, Vector3 normal, float margin) {
    return SoftbodyJNI.btSparseSdf3_Evaluate(swigCPtr, this, x, btCollisionShape.getCPtr(shape), shape, normal, margin);
}
