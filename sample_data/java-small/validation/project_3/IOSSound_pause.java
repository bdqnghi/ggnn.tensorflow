@Override
public void pause(long soundId) {
    ALSource source;
    if ((source = getSoundSource(soundId)) != null)
        source.setPaused(true);
}
