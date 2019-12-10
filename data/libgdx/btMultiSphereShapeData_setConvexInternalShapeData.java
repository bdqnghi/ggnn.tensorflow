public void setConvexInternalShapeData(btConvexInternalShapeData value) {
    CollisionJNI.btMultiSphereShapeData_convexInternalShapeData_set(swigCPtr, this, btConvexInternalShapeData.getCPtr(value), value);
}
