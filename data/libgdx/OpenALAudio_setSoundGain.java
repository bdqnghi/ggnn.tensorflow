public void setSoundGain(long soundId, float volume) {
    if (!soundIdToSource.containsKey(soundId))
        return;
    int sourceId = soundIdToSource.get(soundId);
    AL10.alSourcef(sourceId, AL10.AL_GAIN, volume);
}
