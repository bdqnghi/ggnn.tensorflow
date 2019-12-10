public void removeCharacter(btActionInterface character) {
    DynamicsJNI.btDynamicsWorld_removeCharacter(swigCPtr, this, btActionInterface.getCPtr(character), character);
}
