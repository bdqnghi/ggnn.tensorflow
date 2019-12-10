public void setSoundPan(long soundId, float pan, float volume) {
    if (!soundIdToSource.containsKey(soundId))
        return;
    int sourceId = soundIdToSource.get(soundId);
    AL10.alSource3f(sourceId, AL10.AL_POSITION, MathUtils.cos((pan - 1) * MathUtils.PI / 2), 0, MathUtils.sin((pan + 1) * MathUtils.PI / 2));
    AL10.alSourcef(sourceId, AL10.AL_GAIN, volume);
}
