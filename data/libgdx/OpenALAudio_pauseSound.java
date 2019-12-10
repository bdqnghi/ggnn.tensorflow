public void pauseSound(long soundId) {
    if (!soundIdToSource.containsKey(soundId))
        return;
    int sourceId = soundIdToSource.get(soundId);
    alSourcePause(sourceId);
}
