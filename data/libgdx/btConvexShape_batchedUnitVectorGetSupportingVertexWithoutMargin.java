public void batchedUnitVectorGetSupportingVertexWithoutMargin(btVector3 vectors, btVector3 supportVerticesOut, int numVectors) {
    CollisionJNI.btConvexShape_batchedUnitVectorGetSupportingVertexWithoutMargin(swigCPtr, this, btVector3.getCPtr(vectors), vectors, btVector3.getCPtr(supportVerticesOut), supportVerticesOut, numVectors);
}
