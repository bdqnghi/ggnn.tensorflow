public void serialize(btVector3FloatData dataOut) {
    LinearMathJNI.btVector3_serialize(swigCPtr, this, btVector3FloatData.getCPtr(dataOut), dataOut);
}
