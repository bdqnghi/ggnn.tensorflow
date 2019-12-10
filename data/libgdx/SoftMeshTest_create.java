@Override
public void create() {
    super.create();
    world.maxSubSteps = 20;
    world.add("ground", 0f, 0f, 0f).setColor(0.25f + 0.5f * (float) Math.random(), 0.25f + 0.5f * (float) Math.random(), 0.25f + 0.5f * (float) Math.random(), 1f);
    // Note: not every model is suitable for a one on one translation with a soft body, a better model might be added later.
    model = objLoader.loadModel(Gdx.files.internal("data/wheel.obj"));
    MeshPart meshPart = model.nodes.get(0).parts.get(0).meshPart;
    meshPart.mesh.scale(6, 6, 6);
    indexMap = BufferUtils.newShortBuffer(meshPart.size);
    positionOffset = meshPart.mesh.getVertexAttribute(Usage.Position).offset;
    normalOffset = meshPart.mesh.getVertexAttribute(Usage.Normal).offset;
    softBody = new btSoftBody(worldInfo, meshPart.mesh.getVerticesBuffer(), meshPart.mesh.getVertexSize(), positionOffset, normalOffset, meshPart.mesh.getIndicesBuffer(), meshPart.offset, meshPart.size, indexMap, 0);
    // Set mass of the first vertex to zero so its unmovable, comment out this line to make it a fully dynamic body.
    softBody.setMass(0, 0);
    com.badlogic.gdx.physics.bullet.softbody.btSoftBody.Material pm = softBody.appendMaterial();
    pm.setKLST(0.2f);
    pm.setFlags(0);
    softBody.generateBendingConstraints(2, pm);
    // Be careful increasing iterations, it decreases performance (but increases accuracy).
    softBody.setConfig_piterations(7);
    softBody.setConfig_kDF(0.2f);
    softBody.randomizeConstraints();
    softBody.setTotalMass(1);
    softBody.translate(tmpV.set(1, 5, 1));
    ((btSoftRigidDynamicsWorld) (world.collisionWorld)).addSoftBody(softBody);
    world.add(entity = new BulletEntity(model, (btCollisionObject) null, 1, 5, 1));
}
