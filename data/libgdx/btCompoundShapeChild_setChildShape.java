public void setChildShape(btCollisionShape value) {
    CollisionJNI.btCompoundShapeChild_childShape_set(swigCPtr, this, btCollisionShape.getCPtr(value), value);
}
