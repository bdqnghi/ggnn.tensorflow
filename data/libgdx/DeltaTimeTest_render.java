@Override
public void render() {
    long frameTime = TimeUtils.nanoTime();
    float deltaTime = (frameTime - lastFrameTime) / 1000000000.0f;
    lastFrameTime = frameTime;
    Gdx.app.log("DeltaTimeTest", "delta: " + deltaTime + ", gdx delta: " + Gdx.graphics.getDeltaTime());
}
