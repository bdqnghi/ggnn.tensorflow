@Override
public void update() {
    if (performanceCounter != null) {
        performanceCounter.tick();
        performanceCounter.start();
    }
    if (collisionWorld instanceof btDynamicsWorld)
        ((btDynamicsWorld) collisionWorld).stepSimulation(Gdx.graphics.getDeltaTime(), maxSubSteps, fixedTimeStep);
    if (performanceCounter != null)
        performanceCounter.stop();
}
