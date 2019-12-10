public void update(float deltaTime) {
    dist += dir.len() * deltaTime;
    if (dist > maxDist) {
        dir.scl(-1);
        dist = 0;
    }
    platform.setLinearVelocity(dir);
}
