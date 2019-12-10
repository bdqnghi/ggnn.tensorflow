@Override
public void dispose() {
    ((btDiscreteDynamicsWorld) (world.collisionWorld)).removeAction(characterController);
    world.collisionWorld.removeCollisionObject(ghostObject);
    super.dispose();
    characterController.dispose();
    ghostObject.dispose();
    ghostShape.dispose();
    ghostPairCallback.dispose();
    ground = null;
}
