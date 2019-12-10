public void stopSound(long soundId) {
    if (!soundIdToSource.containsKey(soundId))
        return;
    int sourceId = soundIdToSource.get(soundId);
    alSourceStop(sourceId);
}
