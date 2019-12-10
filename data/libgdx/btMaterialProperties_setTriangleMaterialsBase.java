public void setTriangleMaterialsBase(java.nio.ByteBuffer value) {
    assert value.isDirect() : "Buffer must be allocated direct.";
    {
        CollisionJNI.btMaterialProperties_triangleMaterialsBase_set(swigCPtr, this, value);
    }
}
