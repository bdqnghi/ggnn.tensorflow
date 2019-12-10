@Override
public void stop(long soundId) {
    ALSource source;
    if ((source = getSoundSource(soundId)) != null)
        source.stop();
}
