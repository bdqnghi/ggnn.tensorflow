public void stop() {
    if (sourceID == -1)
        return;
    audio.freeSource(sourceID);
    sourceID = -1;
    renderedSeconds = 0;
    isPlaying = false;
}
