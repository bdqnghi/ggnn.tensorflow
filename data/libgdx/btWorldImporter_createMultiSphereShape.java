public btMultiSphereShape createMultiSphereShape(btVector3 positions, java.nio.FloatBuffer radi, int numSpheres) {
    assert radi.isDirect() : "Buffer must be allocated direct.";
    {
        long cPtr = ExtrasJNI.btWorldImporter_createMultiSphereShape(swigCPtr, this, btVector3.getCPtr(positions), positions, radi, numSpheres);
        return (cPtr == 0) ? null : new btMultiSphereShape(cPtr, false);
    }
}
