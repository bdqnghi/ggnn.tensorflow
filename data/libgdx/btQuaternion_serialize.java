public void serialize(btQuaternionFloatData dataOut) {
    LinearMathJNI.btQuaternion_serialize(swigCPtr, this, btQuaternionFloatData.getCPtr(dataOut), dataOut);
}
