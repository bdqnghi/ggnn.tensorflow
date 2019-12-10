@Override
public void create() {
    super.create();
    world.add("ground", 0f, 0f, 0f).setColor(0.25f + 0.5f * (float) Math.random(), 0.25f + 0.5f * (float) Math.random(), 0.25f + 0.5f * (float) Math.random(), 1f);
    float x0 = -2f, y0 = 6f, z0 = -2f;
    float x1 = 8f, y1 = 6f, z1 = 8f;
    Vector3 patch00 = new Vector3(x0, y0, z0);
    Vector3 patch10 = new Vector3(x1, y1, z0);
    Vector3 patch01 = new Vector3(x0, y0, z1);
    Vector3 patch11 = new Vector3(x1, y1, z1);
    softBody = btSoftBodyHelpers.CreatePatch(worldInfo, patch00, patch10, patch01, patch11, 15, 15, 15, false);
    softBody.takeOwnership();
    softBody.setTotalMass(100f);
    ((btSoftRigidDynamicsWorld) (world.collisionWorld)).addSoftBody(softBody);
    final int vertCount = softBody.getNodeCount();
    final int faceCount = softBody.getFaceCount();
    mesh = new Mesh(false, vertCount, faceCount * 3, new VertexAttribute(Usage.Position, 3, ShaderProgram.POSITION_ATTRIBUTE), new VertexAttribute(Usage.Normal, 3, ShaderProgram.NORMAL_ATTRIBUTE), new VertexAttribute(Usage.TextureCoordinates, 2, ShaderProgram.TEXCOORD_ATTRIBUTE + "0"));
    final int vertSize = mesh.getVertexSize() / 4;
    mesh.getVerticesBuffer().position(0);
    mesh.getVerticesBuffer().limit(vertCount * vertSize);
    mesh.getIndicesBuffer().position(0);
    mesh.getIndicesBuffer().limit(faceCount * 3);
    softBody.getVertices(mesh.getVerticesBuffer(), vertCount, mesh.getVertexSize(), 0);
    softBody.getIndices(mesh.getIndicesBuffer(), faceCount);
    final float[] verts = new float[vertCount * vertSize];
    final int uvOffset = mesh.getVertexAttribute(Usage.TextureCoordinates).offset / 4;
    final int normalOffset = mesh.getVertexAttribute(Usage.Normal).offset / 4;
    mesh.getVertices(verts);
    for (int i = 0; i < vertCount; i++) {
        verts[i * vertSize + normalOffset] = 0f;
        verts[i * vertSize + normalOffset + 1] = 1f;
        verts[i * vertSize + normalOffset + 2] = 0f;
        verts[i * vertSize + uvOffset] = (verts[i * vertSize] - x0) / (x1 - x0);
        verts[i * vertSize + uvOffset + 1] = (verts[i * vertSize + 2] - z0) / (z1 - z0);
    }
    mesh.setVertices(verts);
    texture = new Texture(Gdx.files.internal("data/badlogic.jpg"));
    ModelBuilder builder = new ModelBuilder();
    builder.begin();
    builder.part(new MeshPart("", mesh, 0, mesh.getNumIndices(), GL20.GL_TRIANGLES), new Material(TextureAttribute.createDiffuse(texture), ColorAttribute.createSpecular(Color.WHITE), FloatAttribute.createShininess(64f), IntAttribute.createCullFace(0)));
    model = builder.end();
    instance = new ModelInstance(model);
    world.add(new BulletEntity(instance, null));
}
