public String serialize(long dataBuffer, SWIGTYPE_p_btSerializer serializer) {
    return CollisionJNI.btStridingMeshInterface_serialize(swigCPtr, this, dataBuffer, SWIGTYPE_p_btSerializer.getCPtr(serializer));
}
