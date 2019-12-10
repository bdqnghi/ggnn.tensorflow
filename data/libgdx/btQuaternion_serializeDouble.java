public void serializeDouble(btQuaternionDoubleData dataOut) {
    LinearMathJNI.btQuaternion_serializeDouble(swigCPtr, this, btQuaternionDoubleData.getCPtr(dataOut), dataOut);
}
