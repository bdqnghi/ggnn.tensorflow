public static void find_collision(btGImpactBvh boxset1, Matrix4 trans1, btGImpactBvh boxset2, Matrix4 trans2, btPairSet collision_pairs) {
    CollisionJNI.btGImpactBvh_find_collision(btGImpactBvh.getCPtr(boxset1), boxset1, trans1, btGImpactBvh.getCPtr(boxset2), boxset2, trans2, btPairSet.getCPtr(collision_pairs), collision_pairs);
}
