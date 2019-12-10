@Override
public long loop(float volume, float pitch, float pan) {
    long id = loop();
    setPitch(id, pitch);
    setPan(id, pan, volume);
    return id;
}
