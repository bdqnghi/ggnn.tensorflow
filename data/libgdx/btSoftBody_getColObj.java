public btCollisionObject getColObj() {
    return btCollisionObject.getInstance(SoftbodyJNI.btSoftBody_sCti_colObj_get(swigCPtr, this), false);
}
