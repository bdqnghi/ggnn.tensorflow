/**
 * Adds a body to the group
 *
 * @param argBody
 */
public void addBody(Body argBody) {
    bodies.add(argBody);
    if (bodies.size() == 1) {
        bodyA = argBody;
    }
    if (bodies.size() == 2) {
        bodyB = argBody;
    }
}
