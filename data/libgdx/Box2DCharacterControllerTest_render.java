@Override
public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    cam.position.set(player.getPosition().x, player.getPosition().y, 0);
    cam.update();
    renderer.render(world, cam.combined);
    Vector2 vel = player.getLinearVelocity();
    Vector2 pos = player.getPosition();
    boolean grounded = isPlayerGrounded(Gdx.graphics.getDeltaTime());
    if (grounded) {
        lastGroundTime = TimeUtils.nanoTime();
    } else {
        if (TimeUtils.nanoTime() - lastGroundTime < 100000000) {
            grounded = true;
        }
    }
    // cap max velocity on x
    if (Math.abs(vel.x) > MAX_VELOCITY) {
        vel.x = Math.signum(vel.x) * MAX_VELOCITY;
        player.setLinearVelocity(vel.x, vel.y);
    }
    // calculate stilltime & damp
    if (!Gdx.input.isKeyPressed(Keys.A) && !Gdx.input.isKeyPressed(Keys.D)) {
        stillTime += Gdx.graphics.getDeltaTime();
        player.setLinearVelocity(vel.x * 0.9f, vel.y);
    } else {
        stillTime = 0;
    }
    // disable friction while jumping
    if (!grounded) {
        playerPhysicsFixture.setFriction(0f);
        playerSensorFixture.setFriction(0f);
    } else {
        if (!Gdx.input.isKeyPressed(Keys.A) && !Gdx.input.isKeyPressed(Keys.D) && stillTime > 0.2) {
            playerPhysicsFixture.setFriction(1000f);
            playerSensorFixture.setFriction(1000f);
        } else {
            playerPhysicsFixture.setFriction(0.2f);
            playerSensorFixture.setFriction(0.2f);
        }
        // character hops :)
        if (groundedPlatform != null && groundedPlatform instanceof MovingPlatform && ((MovingPlatform) groundedPlatform).dist == 0) {
            player.applyLinearImpulse(0, -24, pos.x, pos.y, true);
        }
    }
    // since Box2D 2.2 we need to reset the friction of any existing contacts
    Array<Contact> contacts = world.getContactList();
    for (int i = 0; i < world.getContactCount(); i++) {
        Contact contact = contacts.get(i);
        contact.resetFriction();
    }
    // apply left impulse, but only if max velocity is not reached yet
    if (Gdx.input.isKeyPressed(Keys.A) && vel.x > -MAX_VELOCITY) {
        player.applyLinearImpulse(-2f, 0, pos.x, pos.y, true);
    }
    // apply right impulse, but only if max velocity is not reached yet
    if (Gdx.input.isKeyPressed(Keys.D) && vel.x < MAX_VELOCITY) {
        player.applyLinearImpulse(2f, 0, pos.x, pos.y, true);
    }
    // jump, but only when grounded
    if (jump) {
        jump = false;
        if (grounded) {
            player.setLinearVelocity(vel.x, 0);
            System.out.println("jump before: " + player.getLinearVelocity());
            player.setTransform(pos.x, pos.y + 0.01f, 0);
            player.applyLinearImpulse(0, 40, pos.x, pos.y, true);
            System.out.println("jump, " + player.getLinearVelocity());
        }
    }
    // update platforms
    for (int i = 0; i < platforms.size; i++) {
        Platform platform = platforms.get(i);
        platform.update(Math.max(1 / 30.0f, Gdx.graphics.getDeltaTime()));
    }
    // le step...
    world.step(Gdx.graphics.getDeltaTime(), 4, 4);
    // accum += Gdx.graphics.getDeltaTime();
    // while(accum > TICK) {
    // accum -= TICK;
    // world.step(TICK, 4, 4);
    // }
    player.setAwake(true);
    cam.project(point.set(pos.x, pos.y, 0));
    batch.begin();
    font.draw(batch, "friction: " + playerPhysicsFixture.getFriction() + "\ngrounded: " + grounded, point.x + 20, point.y);
    batch.end();
}
