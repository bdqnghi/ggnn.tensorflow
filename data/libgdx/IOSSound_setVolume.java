@Override
public void setVolume(long soundId, float volume) {
    ALSource source;
    if ((source = getSoundSource(soundId)) != null)
        source.setVolume(volume);
}
