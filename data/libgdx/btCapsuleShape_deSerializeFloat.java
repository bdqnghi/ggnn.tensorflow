public void deSerializeFloat(btCapsuleShapeData dataBuffer) {
    CollisionJNI.btCapsuleShape_deSerializeFloat(swigCPtr, this, btCapsuleShapeData.getCPtr(dataBuffer), dataBuffer);
}
