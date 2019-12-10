public void setMaterialBase(java.nio.ByteBuffer value) {
    assert value.isDirect() : "Buffer must be allocated direct.";
    {
        CollisionJNI.btMaterialProperties_materialBase_set(swigCPtr, this, value);
    }
}
