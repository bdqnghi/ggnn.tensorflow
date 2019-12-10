/**
 * Test a point for containment in this fixture.
 * @param x the x-coordinate
 * @param y the y-coordinate
 */
public boolean testPoint(float x, float y) {
    return jniTestPoint(addr, x, y);
}
