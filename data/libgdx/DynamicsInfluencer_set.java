@Override
public void set(ParticleController particleController) {
    super.set(particleController);
    for (int k = 0; k < velocities.size; ++k) {
        velocities.items[k].set(particleController);
    }
}
