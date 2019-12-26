@Override
public void setLooping(long soundId, boolean looping) {
    ALSource source;
    if ((source = getSoundSource(soundId)) != null)
        source.setLooping(looping);
}
