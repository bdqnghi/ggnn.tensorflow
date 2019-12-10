public void gimpact_vs_gimpact(btCollisionObjectWrapper body0Wrap, btCollisionObjectWrapper body1Wrap, btGImpactShapeInterface shape0, btGImpactShapeInterface shape1) {
    CollisionJNI.btGImpactCollisionAlgorithm_gimpact_vs_gimpact(swigCPtr, this, btCollisionObjectWrapper.getCPtr(body0Wrap), body0Wrap, btCollisionObjectWrapper.getCPtr(body1Wrap), body1Wrap, btGImpactShapeInterface.getCPtr(shape0), shape0, btGImpactShapeInterface.getCPtr(shape1), shape1);
}
