public void setCollisionDisabledObjects(btCollisionObjectConstArray value) {
    SoftbodyJNI.btSoftBody_collisionDisabledObjects_set(swigCPtr, this, btCollisionObjectConstArray.getCPtr(value), value);
}
