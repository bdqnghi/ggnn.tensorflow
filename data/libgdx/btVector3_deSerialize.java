public void deSerialize(btVector3FloatData dataIn) {
    LinearMathJNI.btVector3_deSerialize(swigCPtr, this, btVector3FloatData.getCPtr(dataIn), dataIn);
}
