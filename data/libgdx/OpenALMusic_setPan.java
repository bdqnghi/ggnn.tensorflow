public void setPan(float pan, float volume) {
    this.volume = volume;
    this.pan = pan;
    if (audio.noDevice)
        return;
    if (sourceID == -1)
        return;
    alSource3f(sourceID, AL_POSITION, MathUtils.cos((pan - 1) * MathUtils.PI / 2), 0, MathUtils.sin((pan + 1) * MathUtils.PI / 2));
    alSourcef(sourceID, AL_GAIN, volume);
}
