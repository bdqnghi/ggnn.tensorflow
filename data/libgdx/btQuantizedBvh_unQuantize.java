public Vector3 unQuantize(java.nio.IntBuffer vecIn) {
    assert vecIn.isDirect() : "Buffer must be allocated direct.";
    {
        return CollisionJNI.btQuantizedBvh_unQuantize(swigCPtr, this, vecIn);
    }
}
