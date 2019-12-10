public long getSoundId(int sourceId) {
    if (!sourceToSoundId.containsKey(sourceId))
        return -1;
    return sourceToSoundId.get(sourceId);
}
