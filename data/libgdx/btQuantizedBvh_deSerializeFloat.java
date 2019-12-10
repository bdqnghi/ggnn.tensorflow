public void deSerializeFloat(btQuantizedBvhFloatData quantizedBvhFloatData) {
    CollisionJNI.btQuantizedBvh_deSerializeFloat(swigCPtr, this, btQuantizedBvhFloatData.getCPtr(quantizedBvhFloatData), quantizedBvhFloatData);
}
