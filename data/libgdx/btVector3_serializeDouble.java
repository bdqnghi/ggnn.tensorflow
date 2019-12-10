public void serializeDouble(btVector3DoubleData dataOut) {
    LinearMathJNI.btVector3_serializeDouble(swigCPtr, this, btVector3DoubleData.getCPtr(dataOut), dataOut);
}
