public void setConvexInternalShapeData(btConvexInternalShapeData value) {
    CollisionJNI.btCapsuleShapeData_convexInternalShapeData_set(swigCPtr, this, btConvexInternalShapeData.getCPtr(value), value);
}
