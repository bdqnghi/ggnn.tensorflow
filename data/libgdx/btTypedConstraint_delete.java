@Override
protected synchronized void delete() {
    if (swigCPtr != 0) {
        if (swigCMemOwn) {
            swigCMemOwn = false;
            DynamicsJNI.delete_btTypedConstraint_btConstraintInfo2(swigCPtr);
        }
        swigCPtr = 0;
    }
    super.delete();
}
