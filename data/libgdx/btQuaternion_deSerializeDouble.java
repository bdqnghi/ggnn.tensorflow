public void deSerializeDouble(btQuaternionDoubleData dataIn) {
    LinearMathJNI.btQuaternion_deSerializeDouble(swigCPtr, this, btQuaternionDoubleData.getCPtr(dataIn), dataIn);
}
