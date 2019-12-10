public String serialize(long dataBuffer, SWIGTYPE_p_btSerializer serializer) {
    return CollisionJNI.btCollisionShape_serialize(swigCPtr, this, dataBuffer, SWIGTYPE_p_btSerializer.getCPtr(serializer));
}
