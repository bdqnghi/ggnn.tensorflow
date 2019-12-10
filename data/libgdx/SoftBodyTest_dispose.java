@Override
public void dispose() {
    ((btSoftRigidDynamicsWorld) (world.collisionWorld)).removeSoftBody(softBody);
    softBody.dispose();
    softBody = null;
    super.dispose();
    worldInfo.dispose();
    worldInfo = null;
    instance = null;
    model.dispose();
    model = null;
    mesh = null;
    texture.dispose();
    texture = null;
}
