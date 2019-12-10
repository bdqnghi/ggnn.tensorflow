@Override
public long play(float volume, float pitch, float pan) {
    long id = play();
    setPitch(id, pitch);
    setPan(id, pan, volume);
    return id;
}
