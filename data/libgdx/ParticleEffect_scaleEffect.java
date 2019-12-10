public void scaleEffect(float scaleFactor) {
    for (ParticleEmitter particleEmitter : emitters) {
        particleEmitter.getScale().setHigh(particleEmitter.getScale().getHighMin() * scaleFactor, particleEmitter.getScale().getHighMax() * scaleFactor);
        particleEmitter.getScale().setLow(particleEmitter.getScale().getLowMin() * scaleFactor, particleEmitter.getScale().getLowMax() * scaleFactor);
        particleEmitter.getVelocity().setHigh(particleEmitter.getVelocity().getHighMin() * scaleFactor, particleEmitter.getVelocity().getHighMax() * scaleFactor);
        particleEmitter.getVelocity().setLow(particleEmitter.getVelocity().getLowMin() * scaleFactor, particleEmitter.getVelocity().getLowMax() * scaleFactor);
        particleEmitter.getGravity().setHigh(particleEmitter.getGravity().getHighMin() * scaleFactor, particleEmitter.getGravity().getHighMax() * scaleFactor);
        particleEmitter.getGravity().setLow(particleEmitter.getGravity().getLowMin() * scaleFactor, particleEmitter.getGravity().getLowMax() * scaleFactor);
        particleEmitter.getWind().setHigh(particleEmitter.getWind().getHighMin() * scaleFactor, particleEmitter.getWind().getHighMax() * scaleFactor);
        particleEmitter.getWind().setLow(particleEmitter.getWind().getLowMin() * scaleFactor, particleEmitter.getWind().getLowMax() * scaleFactor);
        particleEmitter.getSpawnWidth().setHigh(particleEmitter.getSpawnWidth().getHighMin() * scaleFactor, particleEmitter.getSpawnWidth().getHighMax() * scaleFactor);
        particleEmitter.getSpawnWidth().setLow(particleEmitter.getSpawnWidth().getLowMin() * scaleFactor, particleEmitter.getSpawnWidth().getLowMax() * scaleFactor);
        particleEmitter.getSpawnHeight().setHigh(particleEmitter.getSpawnHeight().getHighMin() * scaleFactor, particleEmitter.getSpawnHeight().getHighMax() * scaleFactor);
        particleEmitter.getSpawnHeight().setLow(particleEmitter.getSpawnHeight().getLowMin() * scaleFactor, particleEmitter.getSpawnHeight().getLowMax() * scaleFactor);
        particleEmitter.getXOffsetValue().setLow(particleEmitter.getXOffsetValue().getLowMin() * scaleFactor, particleEmitter.getXOffsetValue().getLowMax() * scaleFactor);
        particleEmitter.getYOffsetValue().setLow(particleEmitter.getYOffsetValue().getLowMin() * scaleFactor, particleEmitter.getYOffsetValue().getLowMax() * scaleFactor);
    }
}
