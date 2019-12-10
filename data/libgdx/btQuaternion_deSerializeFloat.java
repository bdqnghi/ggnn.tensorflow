public void deSerializeFloat(btQuaternionFloatData dataIn) {
    LinearMathJNI.btQuaternion_deSerializeFloat(swigCPtr, this, btQuaternionFloatData.getCPtr(dataIn), dataIn);
}
