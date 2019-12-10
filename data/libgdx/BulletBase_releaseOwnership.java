/**
 * Release ownership of the native instance, causing the native object NOT to be deleted when this object gets out of scope.
 */
public void releaseOwnership() {
    swigCMemOwn = false;
}
