@Override
public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    batch.begin();
    for (int i = 0; i < cavemen.length; i++) {
        Caveman caveman = cavemen[i];
        TextureRegion frame = caveman.headsLeft ? leftWalk.getKeyFrame(caveman.stateTime, true) : rightWalk.getKeyFrame(caveman.stateTime, true);
        batch.draw(frame, caveman.pos.x, caveman.pos.y);
    }
    batch.end();
    for (int i = 0; i < cavemen.length; i++) {
        cavemen[i].update(Gdx.graphics.getDeltaTime());
    }
    fpsLog.log();
}
