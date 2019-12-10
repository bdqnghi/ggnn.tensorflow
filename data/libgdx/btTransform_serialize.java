public void serialize(btTransformFloatData dataOut) {
    LinearMathJNI.btTransform_serialize(swigCPtr, this, btTransformFloatData.getCPtr(dataOut), dataOut);
}
