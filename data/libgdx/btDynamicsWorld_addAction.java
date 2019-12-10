public void addAction(btActionInterface action) {
    DynamicsJNI.btDynamicsWorld_addAction(swigCPtr, this, btActionInterface.getCPtr(action), action);
}
