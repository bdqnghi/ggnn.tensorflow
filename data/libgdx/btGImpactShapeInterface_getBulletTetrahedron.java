public void getBulletTetrahedron(int prim_index, btTetrahedronShapeEx tetrahedron) {
    CollisionJNI.btGImpactShapeInterface_getBulletTetrahedron(swigCPtr, this, prim_index, btTetrahedronShapeEx.getCPtr(tetrahedron), tetrahedron);
}
