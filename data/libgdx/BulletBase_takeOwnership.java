/**
 * Take ownership of the native instance, causing the native object to be deleted when this object gets out of scope.
 */
public void takeOwnership() {
    swigCMemOwn = true;
}
