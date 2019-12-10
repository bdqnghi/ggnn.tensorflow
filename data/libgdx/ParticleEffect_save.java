public void save(Writer output) throws IOException {
    int index = 0;
    for (int i = 0, n = emitters.size; i < n; i++) {
        ParticleEmitter emitter = emitters.get(i);
        if (index++ > 0)
            output.write("\n\n");
        emitter.save(output);
    }
}
