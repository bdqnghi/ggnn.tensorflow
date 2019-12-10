public static float DistanceToShape(Vector3 x, btCollisionShape shape) {
    return SoftbodyJNI.btSparseSdf3_DistanceToShape(x, btCollisionShape.getCPtr(shape), shape);
}
