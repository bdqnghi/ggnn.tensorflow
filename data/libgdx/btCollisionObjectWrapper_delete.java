@Override
protected synchronized void delete() {
    if (swigCPtr != 0) {
        if (swigCMemOwn) {
            swigCMemOwn = false;
            throw new UnsupportedOperationException("C++ destructor does not have public access");
        }
        swigCPtr = 0;
    }
    super.delete();
}
