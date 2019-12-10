public void deSerialize(btTriangleInfoMapData data) {
    CollisionJNI.btTriangleInfoMap_deSerialize(swigCPtr, this, btTriangleInfoMapData.getCPtr(data), data);
}
