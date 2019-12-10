public static btDbvtAabbMm FromCE(Vector3 c, Vector3 e) {
    return new btDbvtAabbMm(CollisionJNI.btDbvtAabbMm_FromCE(c, e), true);
}
