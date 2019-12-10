public void update() {
    if (flinging) {
        velX *= 0.98f;
        velY *= 0.98f;
        camera.position.add(-velX * Gdx.graphics.getDeltaTime(), velY * Gdx.graphics.getDeltaTime(), 0);
        if (Math.abs(velX) < 0.01f)
            velX = 0;
        if (Math.abs(velY) < 0.01f)
            velY = 0;
    }
}
