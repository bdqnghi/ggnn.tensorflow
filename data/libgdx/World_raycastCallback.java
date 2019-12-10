public float raycastCallback(RayCastInput input, int nodeId) {
    Object userData = broadPhase.getUserData(nodeId);
    FixtureProxy proxy = (FixtureProxy) userData;
    Fixture fixture = proxy.fixture;
    int index = proxy.childIndex;
    boolean hit = fixture.raycast(output, input, index);
    if (hit) {
        float fraction = output.fraction;
        // Vec2 point = (1.0f - fraction) * input.p1 + fraction * input.p2;
        temp.set(input.p2).mulLocal(fraction);
        point.set(input.p1).mulLocal(1 - fraction).addLocal(temp);
        return callback.reportFixture(fixture, point, output.normal, fraction);
    }
    return input.maxFraction;
}
