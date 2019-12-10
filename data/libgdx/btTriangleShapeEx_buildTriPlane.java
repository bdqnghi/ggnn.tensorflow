public void buildTriPlane(btVector4 plane) {
    CollisionJNI.btTriangleShapeEx_buildTriPlane(swigCPtr, this, btVector4.getCPtr(plane), plane);
}
