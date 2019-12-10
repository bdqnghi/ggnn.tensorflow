public void gimpact_vs_compoundshape(btCollisionObjectWrapper body0Wrap, btCollisionObjectWrapper body1Wrap, btGImpactShapeInterface shape0, btCompoundShape shape1, boolean swapped) {
    CollisionJNI.btGImpactCollisionAlgorithm_gimpact_vs_compoundshape(swigCPtr, this, btCollisionObjectWrapper.getCPtr(body0Wrap), body0Wrap, btCollisionObjectWrapper.getCPtr(body1Wrap), body1Wrap, btGImpactShapeInterface.getCPtr(shape0), shape0, btCompoundShape.getCPtr(shape1), shape1, swapped);
}
