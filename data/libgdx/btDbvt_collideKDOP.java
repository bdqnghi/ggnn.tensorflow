public static void collideKDOP(btDbvtNode root, java.nio.FloatBuffer normals, java.nio.FloatBuffer offsets, int count, ICollide policy) {
    assert normals.isDirect() : "Buffer must be allocated direct.";
    assert offsets.isDirect() : "Buffer must be allocated direct.";
    {
        CollisionJNI.btDbvt_collideKDOP__SWIG_1(btDbvtNode.getCPtr(root), root, normals, offsets, count, ICollide.getCPtr(policy), policy);
    }
}
