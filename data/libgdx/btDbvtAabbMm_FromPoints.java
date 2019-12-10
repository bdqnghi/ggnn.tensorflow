public static btDbvtAabbMm FromPoints(SWIGTYPE_p_p_btVector3 ppts, int n) {
    return new btDbvtAabbMm(CollisionJNI.btDbvtAabbMm_FromPoints__SWIG_1(SWIGTYPE_p_p_btVector3.getCPtr(ppts), n), true);
}
