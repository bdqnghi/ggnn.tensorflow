public void processAllTrianglesRay(btTriangleCallback arg0, Vector3 arg1, Vector3 arg2) {
    CollisionJNI.btGImpactShapeInterface_processAllTrianglesRay(swigCPtr, this, btTriangleCallback.getCPtr(arg0), arg0, arg1, arg2);
}
