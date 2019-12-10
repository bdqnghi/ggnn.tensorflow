void pauseSourcesWithBuffer(int bufferID) {
    if (noDevice)
        return;
    for (int i = 0, n = idleSources.size; i < n; i++) {
        int sourceID = idleSources.get(i);
        if (alGetSourcei(sourceID, AL_BUFFER) == bufferID)
            alSourcePause(sourceID);
    }
}
