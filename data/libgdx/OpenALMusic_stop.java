public void stop() {
    if (audio.noDevice)
        return;
    if (sourceID == -1)
        return;
    audio.music.removeValue(this, true);
    reset();
    audio.freeSource(sourceID);
    sourceID = -1;
    renderedSeconds = 0;
    isPlaying = false;
}
