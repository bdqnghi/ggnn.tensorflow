public btVector3 getNormals() {
    long cPtr = CollisionJNI.btBox2dShape_getNormals(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
