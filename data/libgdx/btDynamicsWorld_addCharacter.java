public void addCharacter(btActionInterface character) {
    DynamicsJNI.btDynamicsWorld_addCharacter(swigCPtr, this, btActionInterface.getCPtr(character), character);
}
