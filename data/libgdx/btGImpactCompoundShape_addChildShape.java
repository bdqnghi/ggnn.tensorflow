public void addChildShape(btCollisionShape shape) {
    CollisionJNI.btGImpactCompoundShape_addChildShape__SWIG_1(swigCPtr, this, btCollisionShape.getCPtr(shape), shape);
}
