@Override
public void render() {
    Gdx.gl.glViewport(0, 0, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT | GL20.GL_DEPTH_BUFFER_BIT);
    fpsCounter.put(Gdx.graphics.getFramesPerSecond());
    performanceCounter.tick();
    performanceCounter.start();
    ((btDynamicsWorld) collisionWorld).stepSimulation(Gdx.graphics.getDeltaTime(), 5);
    performanceCounter.stop();
    int c = motionStates.size;
    for (int i = 0; i < c; i++) {
        motionStates.get(i).getWorldTransform(instances.get(i).transform);
    }
    modelBatch.begin(camera);
    modelBatch.render(instances, lights);
    modelBatch.end();
    performance.setLength(0);
    performance.append("FPS: ").append(fpsCounter.value).append(", Bullet: ").append((int) (performanceCounter.load.value * 100f)).append("%");
}
