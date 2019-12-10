@Override
public void update() {
    super.update();
    // Not using dynamics, so update the collision world manually
    if (USE_BULLET_FRUSTUM_CULLING) {
        if (world.performanceCounter != null)
            world.performanceCounter.start();
        world.collisionWorld.performDiscreteCollisionDetection();
        if (world.performanceCounter != null)
            world.performanceCounter.stop();
    }
}
