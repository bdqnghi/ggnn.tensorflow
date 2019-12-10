public void resumeSound(long soundId) {
    if (!soundIdToSource.containsKey(soundId))
        return;
    int sourceId = soundIdToSource.get(soundId);
    if (alGetSourcei(sourceId, AL_SOURCE_STATE) == AL_PAUSED)
        alSourcePlay(sourceId);
}
