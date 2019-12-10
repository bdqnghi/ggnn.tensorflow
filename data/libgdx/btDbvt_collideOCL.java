public static void collideOCL(btDbvtNode root, java.nio.FloatBuffer normals, java.nio.FloatBuffer offsets, Vector3 sortaxis, int count, ICollide policy) {
    assert normals.isDirect() : "Buffer must be allocated direct.";
    assert offsets.isDirect() : "Buffer must be allocated direct.";
    {
        CollisionJNI.btDbvt_collideOCL__SWIG_3(btDbvtNode.getCPtr(root), root, normals, offsets, sortaxis, count, ICollide.getCPtr(policy), policy);
    }
}
