public boolean loadFileFromMemory(java.nio.ByteBuffer memoryBuffer, int len) {
    assert memoryBuffer.isDirect() : "Buffer must be allocated direct.";
    {
        return ExtrasJNI.btBulletWorldImporter_loadFileFromMemory__SWIG_1(swigCPtr, this, memoryBuffer, len);
    }
}
