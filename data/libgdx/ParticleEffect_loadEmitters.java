public void loadEmitters(FileHandle effectFile) {
    InputStream input = effectFile.read();
    emitters.clear();
    BufferedReader reader = null;
    try {
        reader = new BufferedReader(new InputStreamReader(input), 512);
        while (true) {
            ParticleEmitter emitter = new ParticleEmitter(reader);
            emitters.add(emitter);
            if (reader.readLine() == null)
                break;
            if (reader.readLine() == null)
                break;
        }
    } catch (IOException ex) {
        throw new GdxRuntimeException("Error loading effect: " + effectFile, ex);
    } finally {
        StreamUtils.closeQuietly(reader);
    }
}
