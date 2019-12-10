public btConvexHullShape createConvexHullShape() {
    long cPtr = ExtrasJNI.btWorldImporter_createConvexHullShape(swigCPtr, this);
    return (cPtr == 0) ? null : new btConvexHullShape(cPtr, false);
}
