@Override
public void dispose() {
    collisionWorld.dispose();
    solver.dispose();
    broadphase.dispose();
    dispatcher.dispose();
    collisionConfiguration.dispose();
    for (btRigidBody body : bodies) body.dispose();
    bodies.clear();
    for (btDefaultMotionState motionState : motionStates) motionState.dispose();
    motionStates.clear();
    for (btCollisionShape shape : shapes) shape.dispose();
    shapes.clear();
    for (btRigidBodyConstructionInfo info : bodyInfos) info.dispose();
    bodyInfos.clear();
    modelBatch.dispose();
    instances.clear();
    for (Model model : models) model.dispose();
    models.clear();
}
