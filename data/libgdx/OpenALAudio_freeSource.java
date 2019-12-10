void freeSource(int sourceID) {
    if (noDevice)
        return;
    alSourceStop(sourceID);
    alSourcei(sourceID, AL_BUFFER, 0);
    if (sourceToSoundId.containsKey(sourceID)) {
        long soundId = sourceToSoundId.remove(sourceID);
        soundIdToSource.remove(soundId);
    }
    idleSources.add(sourceID);
}
