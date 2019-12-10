public void deSerializeDouble(btQuantizedBvhDoubleData quantizedBvhDoubleData) {
    CollisionJNI.btQuantizedBvh_deSerializeDouble(swigCPtr, this, btQuantizedBvhDoubleData.getCPtr(quantizedBvhDoubleData), quantizedBvhDoubleData);
}
