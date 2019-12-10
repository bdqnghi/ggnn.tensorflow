public static void find_collision(btGImpactQuantizedBvh boxset1, Matrix4 trans1, btGImpactQuantizedBvh boxset2, Matrix4 trans2, btPairSet collision_pairs) {
    CollisionJNI.btGImpactQuantizedBvh_find_collision(btGImpactQuantizedBvh.getCPtr(boxset1), boxset1, trans1, btGImpactQuantizedBvh.getCPtr(boxset2), boxset2, trans2, btPairSet.getCPtr(collision_pairs), collision_pairs);
}
