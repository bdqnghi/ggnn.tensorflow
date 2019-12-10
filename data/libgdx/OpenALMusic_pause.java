public void pause() {
    if (audio.noDevice)
        return;
    if (sourceID != -1)
        alSourcePause(sourceID);
    isPlaying = false;
}
