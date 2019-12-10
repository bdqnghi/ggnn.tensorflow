public void setVolume(float volume) {
    this.volume = volume;
    if (audio.noDevice)
        return;
    if (sourceID != -1)
        alSourcef(sourceID, AL_GAIN, volume);
}
