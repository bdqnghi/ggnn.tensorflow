public static long Hash(int x, int y, int z, btCollisionShape shape) {
    return SoftbodyJNI.btSparseSdf3_Hash(x, y, z, btCollisionShape.getCPtr(shape), shape);
}
