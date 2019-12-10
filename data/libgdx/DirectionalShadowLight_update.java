public void update(final Vector3 center, final Vector3 forward) {
    // cam.position.set(10,10,10);
    cam.position.set(direction).scl(-halfDepth).add(center);
    cam.direction.set(direction).nor();
    // cam.up.set(forward).nor();
    cam.normalizeUp();
    cam.update();
}
