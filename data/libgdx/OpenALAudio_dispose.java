public void dispose() {
    if (noDevice)
        return;
    for (int i = 0, n = allSources.size; i < n; i++) {
        int sourceID = allSources.get(i);
        int state = alGetSourcei(sourceID, AL_SOURCE_STATE);
        if (state != AL_STOPPED)
            alSourceStop(sourceID);
        alDeleteSources(sourceID);
    }
    sourceToSoundId.clear();
    soundIdToSource.clear();
    AL.destroy();
    while (AL.isCreated()) {
        try {
            Thread.sleep(10);
        } catch (InterruptedException e) {
        }
    }
}
