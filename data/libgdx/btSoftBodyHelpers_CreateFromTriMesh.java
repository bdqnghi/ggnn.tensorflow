public static btSoftBody CreateFromTriMesh(btSoftBodyWorldInfo worldInfo, java.nio.FloatBuffer vertices, java.nio.IntBuffer triangles, int ntriangles) {
    assert vertices.isDirect() : "Buffer must be allocated direct.";
    assert triangles.isDirect() : "Buffer must be allocated direct.";
    {
        long cPtr = SoftbodyJNI.btSoftBodyHelpers_CreateFromTriMesh__SWIG_1(btSoftBodyWorldInfo.getCPtr(worldInfo), worldInfo, vertices, triangles, ntriangles);
        return (cPtr == 0) ? null : new btSoftBody(cPtr, false);
    }
}
