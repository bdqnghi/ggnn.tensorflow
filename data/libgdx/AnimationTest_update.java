public void update(float deltaTime) {
    stateTime += deltaTime;
    pos.x = pos.x + (headsLeft ? -VELOCITY * deltaTime : VELOCITY * deltaTime);
    if (pos.x < -64)
        pos.x = Gdx.graphics.getWidth();
    if (pos.x > Gdx.graphics.getWidth() + 64)
        pos.x = -64;
}
