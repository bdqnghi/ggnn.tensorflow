public void updateContactInfo() {
    int n = world.dispatcher.getNumManifolds();
    for (int i = 0; i < n; i++) {
        btPersistentManifold manifold = world.dispatcher.getManifoldByIndexInternal(i);
        btCollisionObject objA = manifold.getBody0();
        btCollisionObject objB = manifold.getBody1();
        if (objA != ground.body && objB != ground.body) {
            if (objA.userData != null && objA.userData instanceof BulletEntity) {
                BulletEntity ent = (BulletEntity) objA.userData;
                if (ent != projectile && !contacts.contains(ent, true) && !hits.contains(ent, true))
                    contacts.add(ent);
            }
            if (objB.userData != null && objB.userData instanceof BulletEntity) {
                BulletEntity ent = (BulletEntity) objB.userData;
                if (ent != projectile && !contacts.contains(ent, true) && !hits.contains(ent, true))
                    contacts.add(ent);
            }
        }
    }
}
