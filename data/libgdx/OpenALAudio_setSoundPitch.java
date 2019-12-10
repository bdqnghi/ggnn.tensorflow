public void setSoundPitch(long soundId, float pitch) {
    if (!soundIdToSource.containsKey(soundId))
        return;
    int sourceId = soundIdToSource.get(soundId);
    AL10.alSourcef(sourceId, AL10.AL_PITCH, pitch);
}
