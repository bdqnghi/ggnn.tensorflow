@Override
public void dispose() {
    if (controller != null) {
        for (int i = 0; i < controller.particles.size; ++i) {
            ParticleController controller = particleControllerChannel.data[i];
            if (controller != null) {
                controller.dispose();
                particleControllerChannel.data[i] = null;
            }
        }
    }
}
