@Override
public void dispose() {
    ((btSoftRigidDynamicsWorld) (world.collisionWorld)).removeSoftBody(softBody);
    softBody.dispose();
    softBody = null;
    indexMap = null;
    super.dispose();
    worldInfo.dispose();
    worldInfo = null;
    model.dispose();
    model = null;
}
