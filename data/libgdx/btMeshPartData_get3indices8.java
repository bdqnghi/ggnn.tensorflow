public btCharIndexTripletData get3indices8() {
    long cPtr = CollisionJNI.btMeshPartData_3indices8_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btCharIndexTripletData(cPtr, false);
}
