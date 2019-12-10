private float getBodyArea() {
    float area = 0.0f;
    for (int i = 0; i < bodies.length; ++i) {
        final int next = (i == bodies.length - 1) ? 0 : i + 1;
        area += bodies[i].getWorldCenter().x * bodies[next].getWorldCenter().y - bodies[next].getWorldCenter().x * bodies[i].getWorldCenter().y;
    }
    area *= .5f;
    return area;
}
