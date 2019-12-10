@Override
public void dispose() {
    for (int i = 0; i < entities.size; i++) {
        btCollisionObject body = entities.get(i).body;
        if (body != null) {
            if (body instanceof btRigidBody)
                ((btDynamicsWorld) collisionWorld).removeRigidBody((btRigidBody) body);
            else
                collisionWorld.removeCollisionObject(body);
        }
    }
    super.dispose();
    collisionWorld.dispose();
    if (solver != null)
        solver.dispose();
    if (broadphase != null)
        broadphase.dispose();
    if (dispatcher != null)
        dispatcher.dispose();
    if (collisionConfiguration != null)
        collisionConfiguration.dispose();
}
