public boolean checkContact(btCollisionObjectWrapper colObjWrap, Vector3 x, float margin, btSoftBody.sCti cti) {
    return SoftbodyJNI.btSoftBody_checkContact(swigCPtr, this, btCollisionObjectWrapper.getCPtr(colObjWrap), colObjWrap, x, margin, btSoftBody.sCti.getCPtr(cti), cti);
}
