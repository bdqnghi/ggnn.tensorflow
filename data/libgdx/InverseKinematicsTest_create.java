@Override
public void create() {
    float aspect = Gdx.graphics.getWidth() / (float) Gdx.graphics.getHeight();
    camera = new OrthographicCamera(15 * aspect, 15);
    camera.update();
    renderer = new ShapeRenderer();
    renderer.setProjectionMatrix(camera.combined);
    bones = new Bone[] { new Bone("bone0", 0, 0, 0), new Bone("bone1", 0, 2, 2), new Bone("bone2", 0, 4, 2), new Bone("bone3", 0, 6, 2), new Bone("end", 0, 8, 2) };
    globalCoords.set(bones[0].position);
}
