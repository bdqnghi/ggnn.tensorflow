public void setConvexInternalShapeData(btConvexInternalShapeData value) {
    CollisionJNI.btConeShapeData_convexInternalShapeData_set(swigCPtr, this, btConvexInternalShapeData.getCPtr(value), value);
}
