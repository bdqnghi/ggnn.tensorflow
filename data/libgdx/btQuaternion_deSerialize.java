public void deSerialize(btQuaternionFloatData dataIn) {
    LinearMathJNI.btQuaternion_deSerialize(swigCPtr, this, btQuaternionFloatData.getCPtr(dataIn), dataIn);
}
