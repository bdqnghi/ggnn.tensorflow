@Override
public void activateParticles(int startIndex, int count) {
    for (int i = startIndex, c = startIndex + count; i < c; ++i) {
        ParticleController controller = pool.obtain();
        controller.start();
        particleControllerChannel.data[i] = controller;
    }
}
