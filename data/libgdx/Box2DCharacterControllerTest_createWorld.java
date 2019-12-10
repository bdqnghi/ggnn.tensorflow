private void createWorld() {
    // (float)Math.random() * 0.1f + 1;
    float y1 = 1;
    float y2 = y1;
    for (int i = 0; i < 50; i++) {
        Body ground = createEdge(BodyType.StaticBody, -50 + i * 2, y1, -50 + i * 2 + 2, y2, 0);
        y1 = y2;
        // (float)Math.random() + 1;
        y2 = 1;
    }
    Body box = createBox(BodyType.StaticBody, 1, 1, 0);
    box.setTransform(30, 3, 0);
    box = createBox(BodyType.StaticBody, 1.2f, 1.2f, 0);
    box.setTransform(5, 2.4f, 0);
    player = createPlayer();
    player.setTransform(-40.0f, 4.0f, 0);
    player.setFixedRotation(true);
    for (int i = 0; i < 20; i++) {
        box = createBox(BodyType.DynamicBody, (float) Math.random(), (float) Math.random(), 3);
        box.setTransform((float) Math.random() * 10f - (float) Math.random() * 10f, (float) Math.random() * 10 + 6, (float) (Math.random() * 2 * Math.PI));
    }
    for (int i = 0; i < 20; i++) {
        Body circle = createCircle(BodyType.DynamicBody, (float) Math.random() * 0.5f, 3);
        circle.setTransform((float) Math.random() * 10f - (float) Math.random() * 10f, (float) Math.random() * 10 + 6, (float) (Math.random() * 2 * Math.PI));
    }
    platforms.add(new CirclePlatform(-24, -5, 10, (float) Math.PI / 4));
    platforms.add(new MovingPlatform(-2, 3, 2, 0.5f, 2, 0, (float) Math.PI / 10f, 4));
    platforms.add(new MovingPlatform(17, 2, 5, 0.5f, 2, 0, 0, 5));
    platforms.add(new MovingPlatform(-7, 5, 2, 0.5f, -2, 2, 0, 8));
// platforms.add(new MovingPlatform(40, 3, 20, 0.5f, 0, 2, 5));
}
