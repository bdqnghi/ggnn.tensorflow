public boolean isPlaying() {
    if (audio.noDevice)
        return false;
    if (sourceID == -1)
        return false;
    return isPlaying;
}
