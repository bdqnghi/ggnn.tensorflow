private void updateKoala(float deltaTime) {
    if (deltaTime == 0)
        return;
    koala.stateTime += deltaTime;
    // check input and apply to velocity & state
    if ((Gdx.input.isKeyPressed(Keys.SPACE) || isTouched(0.5f, 1)) && koala.grounded) {
        koala.velocity.y += Koala.JUMP_VELOCITY;
        koala.state = Koala.State.Jumping;
        koala.grounded = false;
    }
    if (Gdx.input.isKeyPressed(Keys.LEFT) || Gdx.input.isKeyPressed(Keys.A) || isTouched(0, 0.25f)) {
        koala.velocity.x = -Koala.MAX_VELOCITY;
        if (koala.grounded)
            koala.state = Koala.State.Walking;
        koala.facesRight = false;
    }
    if (Gdx.input.isKeyPressed(Keys.RIGHT) || Gdx.input.isKeyPressed(Keys.D) || isTouched(0.25f, 0.5f)) {
        koala.velocity.x = Koala.MAX_VELOCITY;
        if (koala.grounded)
            koala.state = Koala.State.Walking;
        koala.facesRight = true;
    }
    // apply gravity if we are falling
    koala.velocity.add(0, GRAVITY);
    // clamp the velocity to the maximum, x-axis only
    if (Math.abs(koala.velocity.x) > Koala.MAX_VELOCITY) {
        koala.velocity.x = Math.signum(koala.velocity.x) * Koala.MAX_VELOCITY;
    }
    // clamp the velocity to 0 if it's < 1, and set the state to standign
    if (Math.abs(koala.velocity.x) < 1) {
        koala.velocity.x = 0;
        if (koala.grounded)
            koala.state = Koala.State.Standing;
    }
    // multiply by delta time so we know how far we go
    // in this frame
    koala.velocity.scl(deltaTime);
    // perform collision detection & response, on each axis, separately
    // if the koala is moving right, check the tiles to the right of it's
    // right bounding box edge, otherwise check the ones to the left
    Rectangle koalaRect = rectPool.obtain();
    koalaRect.set(koala.position.x, koala.position.y, Koala.WIDTH, Koala.HEIGHT);
    int startX, startY, endX, endY;
    if (koala.velocity.x > 0) {
        startX = endX = (int) (koala.position.x + Koala.WIDTH + koala.velocity.x);
    } else {
        startX = endX = (int) (koala.position.x + koala.velocity.x);
    }
    startY = (int) (koala.position.y);
    endY = (int) (koala.position.y + Koala.HEIGHT);
    getTiles(startX, startY, endX, endY, tiles);
    koalaRect.x += koala.velocity.x;
    for (Rectangle tile : tiles) {
        if (koalaRect.overlaps(tile)) {
            koala.velocity.x = 0;
            break;
        }
    }
    koalaRect.x = koala.position.x;
    // top bounding box edge, otherwise check the ones to the bottom
    if (koala.velocity.y > 0) {
        startY = endY = (int) (koala.position.y + Koala.HEIGHT + koala.velocity.y);
    } else {
        startY = endY = (int) (koala.position.y + koala.velocity.y);
    }
    startX = (int) (koala.position.x);
    endX = (int) (koala.position.x + Koala.WIDTH);
    getTiles(startX, startY, endX, endY, tiles);
    koalaRect.y += koala.velocity.y;
    for (Rectangle tile : tiles) {
        if (koalaRect.overlaps(tile)) {
            // this removes bouncing :)
            if (koala.velocity.y > 0) {
                koala.position.y = tile.y - Koala.HEIGHT;
                // we hit a block jumping upwards, let's destroy it!
                TiledMapTileLayer layer = (TiledMapTileLayer) map.getLayers().get("walls");
                layer.setCell((int) tile.x, (int) tile.y, null);
            } else {
                koala.position.y = tile.y + tile.height;
                // if we hit the ground, mark us as grounded so we can jump
                koala.grounded = true;
            }
            koala.velocity.y = 0;
            break;
        }
    }
    rectPool.free(koalaRect);
    // unscale the velocity by the inverse delta time and set
    // the latest position
    koala.position.add(koala.velocity);
    koala.velocity.scl(1 / deltaTime);
    // Apply damping to the velocity on the x-axis so we don't
    // walk infinitely once a key was pressed
    koala.velocity.x *= Koala.DAMPING;
}
