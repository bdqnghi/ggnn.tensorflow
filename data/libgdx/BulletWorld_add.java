@Override
public void add(final BulletEntity entity) {
    super.add(entity);
    if (entity.body != null) {
        if (entity.body instanceof btRigidBody)
            ((btDiscreteDynamicsWorld) collisionWorld).addRigidBody((btRigidBody) entity.body);
        else
            collisionWorld.addCollisionObject(entity.body);
        // Store the index of the entity in the collision object.
        entity.body.setUserValue(entities.size - 1);
    }
}
