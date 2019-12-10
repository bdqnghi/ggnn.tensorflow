@Override
public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT | GL20.GL_DEPTH_BUFFER_BIT);
    Gdx.gl.glEnable(GL20.GL_DEPTH_TEST);
    angle += Gdx.graphics.getDeltaTime() * 20.0f;
    cubeTrans.setToRotation(Vector3.Y, angle);
    cam.update();
    projector.update();
    texture.bind();
    projTexShader.begin();
    if (camera.getSelectedIndex() == 0) {
        renderMesh(projTexShader, cam.combined, projector.combined, planeTrans, plane, Color.WHITE);
    /*
			 * TODO: Fix method rendering renderMesh(projTexShader, cam.combined, projector.combined, cubeTrans, cube, Color.WHITE);
			 */
    } else {
        renderMesh(projTexShader, projector.combined, projector.combined, planeTrans, plane, Color.WHITE);
    /*
			 * TODO: Fix method rendering renderMesh(projTexShader, projector.combined, projector.combined, cubeTrans, cube,
			 * Color.WHITE);
			 */
    }
    projTexShader.end();
    fps.setText("fps: " + Gdx.graphics.getFramesPerSecond());
    ui.act();
    ui.draw();
}
