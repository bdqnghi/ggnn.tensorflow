static private long SwigConstructbtConvexHullShape(java.nio.FloatBuffer points) {
    assert points.isDirect() : "Buffer must be allocated direct.";
    return CollisionJNI.new_btConvexHullShape__SWIG_2(points);
}
