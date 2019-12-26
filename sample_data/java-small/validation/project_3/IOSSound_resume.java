@Override
public void resume(long soundId) {
    ALSource source;
    if ((source = getSoundSource(soundId)) != null)
        source.setPaused(false);
}
