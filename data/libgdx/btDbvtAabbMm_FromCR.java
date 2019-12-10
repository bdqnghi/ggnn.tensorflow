public static btDbvtAabbMm FromCR(Vector3 c, float r) {
    return new btDbvtAabbMm(CollisionJNI.btDbvtAabbMm_FromCR(c, r), true);
}
