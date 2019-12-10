@Override
public void render() {
    angle += Gdx.graphics.getDeltaTime() * 40.0f;
    float aspect = Gdx.graphics.getWidth() / (float) Gdx.graphics.getHeight();
    projection.setToProjection(1.0f, 20.0f, 60.0f, aspect);
    view.idt().trn(0, 0, -2.0f);
    model.setToRotation(axis, angle);
    combined.set(projection).mul(view).mul(model);
    Gdx.gl20.glViewport(0, 0, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    Gdx.gl20.glClear(GL20.GL_COLOR_BUFFER_BIT);
    shader.begin();
    shader.setUniformMatrix("u_mvpMatrix", combined);
    mesh.render(shader, GL20.GL_TRIANGLES);
    shader.end();
    Gdx.app.log("angle", "" + angle);
}
