public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    float bottomLeftX = Gdx.graphics.getWidth() / 2 - graphSize / 2, bottomLeftY = Gdx.graphics.getHeight() / 2 - graphSize / 2;
    // only show up to two decimals
    String text = String.valueOf(duration);
    if (text.length() > 4)
        text = text.substring(0, text.lastIndexOf('.') + 3);
    text = "duration: " + text + " s (ctrl + scroll to change)";
    stage.getBatch().begin();
    list.getStyle().font.draw(stage.getBatch(), text, bottomLeftX + graphSize / 2, bottomLeftY + graphSize + list.getStyle().font.getLineHeight(), 0, Align.center, false);
    stage.getBatch().end();
    renderer.begin(ShapeType.Line);
    // graph bounds
    renderer.rect(bottomLeftX, bottomLeftY, graphSize, graphSize);
    float lastX = bottomLeftX, lastY = bottomLeftY;
    for (float step = 0; step <= steps; step++) {
        Interpolation interpolation = getInterpolation(selectedInterpolation);
        float percent = step / steps;
        float x = bottomLeftX + graphSize * percent, y = bottomLeftY + graphSize * interpolation.apply(percent);
        renderer.line(lastX, lastY, x, y);
        lastX = x;
        lastY = y;
    }
    time += Gdx.graphics.getDeltaTime();
    if (time > duration) {
        // stop "walking"
        time = Float.NaN;
        // set startPosition to targetPosition for next click
        startPosition.set(targetPosition);
    }
    // draw time marker
    renderer.line(bottomLeftX + graphSize * time / duration, bottomLeftY, bottomLeftX + graphSize * time / duration, bottomLeftY + graphSize);
    // draw path
    renderer.setColor(Color.GRAY);
    renderer.line(startPosition, targetPosition);
    renderer.setColor(Color.WHITE);
    renderer.end();
    // draw the position
    renderer.begin(ShapeType.Filled);
    if (// don't mess up position if time is NaN
    !Float.isNaN(time))
        getPosition(time);
    renderer.circle(position.x, position.y, 7);
    renderer.end();
    stage.act();
    stage.draw();
}
