@Override
public void killParticles(int startIndex, int count) {
    for (int i = startIndex, c = startIndex + count; i < c; ++i) {
        ParticleController controller = particleControllerChannel.data[i];
        controller.end();
        pool.free(controller);
        particleControllerChannel.data[i] = null;
    }
}
