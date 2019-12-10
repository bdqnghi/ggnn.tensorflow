public void update(float deltaTime) {
    if (keys.containsKey(FORWARD)) {
        tmp.set(camera.direction).nor().scl(deltaTime * velocity);
        camera.position.add(tmp);
    }
    if (keys.containsKey(BACKWARD)) {
        tmp.set(camera.direction).nor().scl(-deltaTime * velocity);
        camera.position.add(tmp);
    }
    if (keys.containsKey(STRAFE_LEFT)) {
        tmp.set(camera.direction).crs(camera.up).nor().scl(-deltaTime * velocity);
        camera.position.add(tmp);
    }
    if (keys.containsKey(STRAFE_RIGHT)) {
        tmp.set(camera.direction).crs(camera.up).nor().scl(deltaTime * velocity);
        camera.position.add(tmp);
    }
    if (keys.containsKey(UP)) {
        tmp.set(camera.up).nor().scl(deltaTime * velocity);
        camera.position.add(tmp);
    }
    if (keys.containsKey(DOWN)) {
        tmp.set(camera.up).nor().scl(-deltaTime * velocity);
        camera.position.add(tmp);
    }
    camera.update(true);
}
