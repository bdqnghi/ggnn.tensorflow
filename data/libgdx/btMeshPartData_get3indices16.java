public btShortIntIndexTripletData get3indices16() {
    long cPtr = CollisionJNI.btMeshPartData_3indices16_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btShortIntIndexTripletData(cPtr, false);
}
