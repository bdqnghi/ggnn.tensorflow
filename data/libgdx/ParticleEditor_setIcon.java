public void setIcon(ParticleEmitter emitters, ImageIcon icon) {
    ParticleData data = particleData.get(emitters);
    if (data == null)
        particleData.put(emitters, data = new ParticleData());
    data.icon = icon;
}
