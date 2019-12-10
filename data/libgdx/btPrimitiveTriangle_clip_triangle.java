public int clip_triangle(btPrimitiveTriangle other, btVector3 clipped_points) {
    return CollisionJNI.btPrimitiveTriangle_clip_triangle(swigCPtr, this, btPrimitiveTriangle.getCPtr(other), other, btVector3.getCPtr(clipped_points), clipped_points);
}
