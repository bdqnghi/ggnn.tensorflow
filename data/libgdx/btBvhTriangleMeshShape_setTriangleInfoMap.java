public void setTriangleInfoMap(btTriangleInfoMap triangleInfoMap) {
    CollisionJNI.btBvhTriangleMeshShape_setTriangleInfoMap(swigCPtr, this, btTriangleInfoMap.getCPtr(triangleInfoMap), triangleInfoMap);
}
