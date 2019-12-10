@Override
public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT | GL20.GL_DEPTH_BUFFER_BIT);
    float elapsed = Gdx.graphics.getDeltaTime();
    float scale = timePassed > 0.5 ? 1 - timePassed / 2 : 0.5f + timePassed / 2;
    for (Decal decal : toRender) {
        decal.rotateZ(elapsed * 45);
        decal.setScale(scale);
        batch.add(decal);
    }
    batch.flush();
    timePassed += elapsed;
    frames++;
    if (timePassed > 1.0f) {
        System.out.println("DecalPerformanceTest2 fps: " + frames + " at spritecount: " + toRender.size());
        fps.addValue(frames);
        if (fps.hasEnoughData()) {
            float factor = fps.getMean() / (float) TARGET_FPS;
            int target = (int) (toRender.size() * factor);
            if (fps.getMean() > TARGET_FPS) {
                int start = toRender.size();
                for (int i = start; toRender.size() < target; i++) {
                    toRender.add(makeDecal());
                }
                fps.clear();
            } else {
                while (toRender.size() > target) {
                    toRender.removeLast();
                }
                fps.clear();
            }
        }
        timePassed = 0;
        frames = 0;
    }
}
