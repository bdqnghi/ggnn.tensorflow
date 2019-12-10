public void setConvexInternalShapeData(btConvexInternalShapeData value) {
    CollisionJNI.btCylinderShapeData_convexInternalShapeData_set(swigCPtr, this, btConvexInternalShapeData.getCPtr(value), value);
}
