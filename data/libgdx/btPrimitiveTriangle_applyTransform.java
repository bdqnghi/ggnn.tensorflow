public void applyTransform(Matrix4 t) {
    CollisionJNI.btPrimitiveTriangle_applyTransform(swigCPtr, this, t);
}
