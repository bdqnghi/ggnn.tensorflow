public static Array<BulletEntity> getEntitiesCollidingWithObject(final BulletWorld world, final btCollisionObject object, final Array<BulletEntity> out, final btPersistentManifoldArray tmpArr) {
    // Fetch the array of contacts
    btBroadphasePairArray arr = world.broadphase.getOverlappingPairCache().getOverlappingPairArray();
    // Get the user values (which are indices in the entities array) of all objects colliding with the object
    final int n = arr.getCollisionObjectsValue(ptrs, object);
    // Fill the array of entities
    out.clear();
    for (int i = 0; i < n; i++) out.add(world.entities.get(ptrs[i]));
    return out;
}
