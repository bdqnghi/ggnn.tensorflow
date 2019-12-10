public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT | GL20.GL_DEPTH_BUFFER_BIT);
    Gdx.gl.glEnable(GL20.GL_DEPTH_TEST);
    camera.update();
    for (int i = 0; i < decals.size; i++) {
        Decal decal = decals.get(i);
        if (billboard) {
            // billboarding for ortho cam :)
            // dir.set(-camera.direction.x, -camera.direction.y, -camera.direction.z);
            // decal.setRotation(dir, Vector3.Y);
            // billboarding for perspective cam
            decal.lookAt(camera.position, camera.up);
        }
        batch.add(decal);
    }
    batch.flush();
    logger.log();
}
