public void applyTransform(Matrix4 t) {
    CollisionJNI.btTriangleShapeEx_applyTransform(swigCPtr, this, t);
}
