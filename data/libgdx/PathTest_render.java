@Override
public void render() {
    GL20 gl = Gdx.gl20;
    gl.glClearColor(0.7f, 0.7f, 0.7f, 1);
    gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    if (wait > 0)
        wait -= Gdx.graphics.getDeltaTime();
    else {
        t += speed * Gdx.graphics.getDeltaTime();
        zt += zspeed * Gdx.graphics.getDeltaTime();
        while (t >= 1f) {
            currentPath = (currentPath + 1) % paths.size;
            pathLength = paths.get(currentPath).approxLength(500);
            if (currentPath > 2) {
                avg_speed = speed * pathLength / 8.0f;
            } else {
                avg_speed = speed * pathLength;
            }
            if (currentPath == 0) {
                zigzag = !zigzag;
                zt = 0;
            }
            t -= 1f;
            t2 = 0f;
        }
        paths.get(currentPath).valueAt(tmpV, t);
        paths.get(currentPath).derivativeAt(tmpV2, t);
        paths.get(currentPath).derivativeAt(tmpV3, t2);
        t2 += avg_speed * Gdx.graphics.getDeltaTime() / tmpV3.len();
        paths.get(currentPath).valueAt(tmpV4, t2);
        if (zigzag) {
            tmpV2.nor();
            tmpV2.set(-tmpV2.y, tmpV2.x);
            tmpV2.scl((float) Math.sin(zt) * ZIGZAG_SCALE);
            tmpV.add(tmpV2);
        }
        obj.setPosition(tmpV.x, tmpV.y);
        obj2.setPosition(tmpV4.x, tmpV4.y);
    }
    renderer.begin(spriteBatch.getProjectionMatrix(), GL20.GL_LINE_STRIP);
    float val = 0f;
    while (val <= 1f) {
        renderer.color(0f, 0f, 0f, 1f);
        paths.get(currentPath).valueAt(/* out: */
        tmpV, val);
        renderer.vertex(tmpV.x, tmpV.y, 0);
        val += SAMPLE_POINT_DISTANCE;
    }
    renderer.end();
    spriteBatch.begin();
    obj.draw(spriteBatch);
    obj2.draw(spriteBatch);
    spriteBatch.end();
}
