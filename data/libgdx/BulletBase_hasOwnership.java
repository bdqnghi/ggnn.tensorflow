/**
 * @return True if the native is destroyed when this object gets out of scope, false otherwise.
 */
public boolean hasOwnership() {
    return swigCMemOwn;
}
