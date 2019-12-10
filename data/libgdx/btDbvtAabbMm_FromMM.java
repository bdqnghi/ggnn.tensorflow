public static btDbvtAabbMm FromMM(Vector3 mi, Vector3 mx) {
    return new btDbvtAabbMm(CollisionJNI.btDbvtAabbMm_FromMM(mi, mx), true);
}
