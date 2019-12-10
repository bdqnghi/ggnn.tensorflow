public void setVolume(float volume) {
    this.volume = volume;
    if (sourceID != -1)
        alSourcef(sourceID, AL_GAIN, volume);
}
