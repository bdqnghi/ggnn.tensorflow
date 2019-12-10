@Override
public boolean reportFixture(Fixture fixture) {
    // we ignore it
    if (fixture.getBody() == groundBody)
        return true;
    // we report it
    if (fixture.testPoint(testPoint.x, testPoint.y)) {
        hitBody = fixture.getBody();
        return false;
    } else
        return true;
}
