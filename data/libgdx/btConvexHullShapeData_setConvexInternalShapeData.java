public void setConvexInternalShapeData(btConvexInternalShapeData value) {
    CollisionJNI.btConvexHullShapeData_convexInternalShapeData_set(swigCPtr, this, btConvexInternalShapeData.getCPtr(value), value);
}
