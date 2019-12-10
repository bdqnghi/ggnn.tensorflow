@Override
public void render() {
    final float dt = Gdx.graphics.getDeltaTime();
    frustumEntity.transform.idt();
    frustumEntity.transform.rotate(Vector3.X, angleX = (angleX + dt * SPEED_X) % 360);
    frustumEntity.transform.rotate(Vector3.Y, angleY = (angleY + dt * SPEED_Y) % 360);
    frustumEntity.transform.rotate(Vector3.Z, angleZ = (angleZ + dt * SPEED_Z) % 360);
    // Transform the ghost object
    frustumEntity.body.setWorldTransform(frustumEntity.transform);
    // Transform the frustum cam
    frustumCam.direction.set(0, 0, -1);
    frustumCam.up.set(0, 1, 0);
    frustumCam.position.set(0, 0, 0);
    frustumCam.rotate(frustumEntity.transform);
    frustumCam.update();
    super.render();
    performance.append(" visible: ").append(visibleEntities.size);
}
