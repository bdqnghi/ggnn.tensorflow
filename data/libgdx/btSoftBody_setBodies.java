public void setBodies(btSoftBody.Body value) {
    SoftbodyJNI.btSoftBody_Joint_bodies_set(swigCPtr, this, btSoftBody.Body.getCPtr(value), value);
}
