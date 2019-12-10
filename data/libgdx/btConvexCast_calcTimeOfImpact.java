public boolean calcTimeOfImpact(Matrix4 fromA, Matrix4 toA, Matrix4 fromB, Matrix4 toB, btConvexCast.CastResult result) {
    return CollisionJNI.btConvexCast_calcTimeOfImpact(swigCPtr, this, fromA, toA, fromB, toB, btConvexCast.CastResult.getCPtr(result), result);
}
