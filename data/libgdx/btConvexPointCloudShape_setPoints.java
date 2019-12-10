public void setPoints(btVector3 points, int numPoints) {
    CollisionJNI.btConvexPointCloudShape_setPoints__SWIG_2(swigCPtr, this, btVector3.getCPtr(points), points, numPoints);
}
