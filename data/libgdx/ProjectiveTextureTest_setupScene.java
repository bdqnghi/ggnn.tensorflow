public void setupScene() {
    plane = new Mesh(true, 4, 6, new VertexAttribute(Usage.Position, 3, ShaderProgram.POSITION_ATTRIBUTE), new VertexAttribute(Usage.Normal, 3, ShaderProgram.NORMAL_ATTRIBUTE));
    plane.setVertices(new float[] { -10, -1, 10, 0, 1, 0, 10, -1, 10, 0, 1, 0, 10, -1, -10, 0, 1, 0, -10, -1, -10, 0, 1, 0 });
    plane.setIndices(new short[] { 3, 2, 1, 1, 0, 3 });
    texture = new Texture(Gdx.files.internal("data/badlogic.jpg"), Format.RGB565, true);
    texture.setFilter(TextureFilter.MipMap, TextureFilter.Nearest);
    cam = new PerspectiveCamera(67, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    cam.position.set(0, 5, 10);
    cam.lookAt(0, 0, 0);
    cam.update();
    controller = new PerspectiveCamController(cam);
    projector = new PerspectiveCamera(67, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    projector.position.set(2, 3, 2);
    projector.lookAt(0, 0, 0);
    projector.normalizeUp();
    projector.update();
}
