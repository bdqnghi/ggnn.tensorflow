public void serializeFloat(btVector3FloatData dataOut) {
    LinearMathJNI.btVector3_serializeFloat(swigCPtr, this, btVector3FloatData.getCPtr(dataOut), dataOut);
}
