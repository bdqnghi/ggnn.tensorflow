@Override
public void init() {
    pool.clear();
    // Allocate the new instances
    for (int i = 0; i < controller.emitter.maxParticleCount; ++i) {
        pool.free(pool.newObject());
    }
}
