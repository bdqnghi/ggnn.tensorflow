private void createBoxes() {
    // next we create 50 boxes at random locations above the ground
    // body. First we create a nice polygon representing a box 2 meters
    // wide and high.
    PolygonShape boxPoly = new PolygonShape();
    boxPoly.setAsBox(1, 1);
    // body. Note that we reuse the polygon for each body fixture.
    for (int i = 0; i < 20; i++) {
        // Create the BodyDef, set a random position above the
        // ground and create a new body
        BodyDef boxBodyDef = new BodyDef();
        boxBodyDef.type = BodyType.DynamicBody;
        boxBodyDef.position.x = -24 + (float) (Math.random() * 48);
        boxBodyDef.position.y = 10 + (float) (Math.random() * 100);
        Body boxBody = world.createBody(boxBodyDef);
        boxBody.createFixture(boxPoly, 1);
        // add the box to our list of boxes
        boxes.add(boxBody);
    }
    // we are done, all that's left is disposing the boxPoly
    boxPoly.dispose();
}
