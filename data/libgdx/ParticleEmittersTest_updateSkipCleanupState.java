void updateSkipCleanupState() {
    for (ParticleEffect eff : effects) {
        for (ParticleEmitter e : eff.getEmitters()) e.setCleansUpBlendFunction(!skipCleanup.isChecked());
    }
}
