@Override
public void setPitch(long soundId, float pitch) {
    ALSource source;
    if ((source = getSoundSource(soundId)) != null)
        source.setPitch(pitch);
}
