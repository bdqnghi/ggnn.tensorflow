public void serializeFloat(btQuaternionFloatData dataOut) {
    LinearMathJNI.btQuaternion_serializeFloat(swigCPtr, this, btQuaternionFloatData.getCPtr(dataOut), dataOut);
}
