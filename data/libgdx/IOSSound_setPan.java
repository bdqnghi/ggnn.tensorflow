@Override
public void setPan(long soundId, float pan, float volume) {
    ALSource source;
    if ((source = getSoundSource(soundId)) != null) {
        source.setPan(pan);
        source.setVolume(volume);
    }
}
