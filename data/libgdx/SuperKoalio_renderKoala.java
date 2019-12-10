private void renderKoala(float deltaTime) {
    // based on the koala state, get the animation frame
    TextureRegion frame = null;
    switch(koala.state) {
        case Standing:
            frame = stand.getKeyFrame(koala.stateTime);
            break;
        case Walking:
            frame = walk.getKeyFrame(koala.stateTime);
            break;
        case Jumping:
            frame = jump.getKeyFrame(koala.stateTime);
            break;
    }
    // draw the koala, depending on the current velocity
    // on the x-axis, draw the koala facing either right
    // or left
    Batch batch = renderer.getBatch();
    batch.begin();
    if (koala.facesRight) {
        batch.draw(frame, koala.position.x, koala.position.y, Koala.WIDTH, Koala.HEIGHT);
    } else {
        batch.draw(frame, koala.position.x + Koala.WIDTH, koala.position.y, -Koala.WIDTH, Koala.HEIGHT);
    }
    batch.end();
}
