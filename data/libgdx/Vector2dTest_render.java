@Override
public void render() {
    Gdx.gl.glClearColor(0, 0, 0, 0);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    renderer.setProjectionMatrix(camera.combined);
    // Render the 'lerp' vector target as a circle
    renderer.begin(ShapeType.Filled);
    renderer.setColor(1.0f, 0, 0, 0.3f);
    renderer.circle(-2 + lerpTarget.x, 2 + lerpTarget.y, 0.08f, 16);
    renderer.circle(-4 + lerpTarget2.x, 0 + lerpTarget2.y, 0.08f, 16);
    renderer.end();
    renderer.begin(ShapeType.Line);
    // Render the three fixed X, Y and sum vectors:
    renderer.setColor(Color.RED);
    renderVectorAt(0, 0, Vector2.X);
    renderer.setColor(Color.GREEN);
    renderVectorAt(0, 0, Vector2.Y);
    renderer.setColor(Color.YELLOW);
    renderVectorAt(0, 0, sum);
    final float changeRate = Gdx.graphics.getDeltaTime();
    renderer.setColor(Color.WHITE);
    renderVectorAt(2, 2, rotating);
    rotating.rotate(93 * changeRate);
    renderVectorAt(2, -2, scalingX);
    scalingX.set(0, MathUtils.sin((System.currentTimeMillis() - start) / 520.0f));
    renderVectorAt(2, -2, scalingY);
    scalingY.set(MathUtils.cos((System.currentTimeMillis() - start) / 260.0f), 0);
    renderVectorAt(-2, 2, lerping1);
    lerping1.lerp(lerpTarget, 0.025f);
    if (lerping1.epsilonEquals(lerpTarget, 0.05f)) {
        lerpTarget.set(-1.0f + MathUtils.random(2.0f), -1.0f + MathUtils.random(2.0f)).nor();
    }
    timePassed += Gdx.graphics.getDeltaTime();
    renderVectorAt(-4, 0, lerping2);
    lerping2.set(lerpStart2);
    lerping2.interpolate(lerpTarget2, MathUtils.clamp(timePassed / DURATION, 0, 1), interpolator);
    if (lerping2.epsilonEquals(lerpTarget2, 0.025f)) {
        lerpTarget2.set(-1.0f + MathUtils.random(2.0f), -1.0f + MathUtils.random(2.0f)).nor();
        lerpStart2.set(lerping2);
        timePassed = 0;
    }
    renderVectorAt(-2, -2, mash);
    mash.set(0, 0).add(rotating).add(scalingX).add(scalingY).add(lerping1);
    renderer.end();
}
