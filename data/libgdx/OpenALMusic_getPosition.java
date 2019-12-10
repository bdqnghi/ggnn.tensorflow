public float getPosition() {
    if (audio.noDevice)
        return 0;
    if (sourceID == -1)
        return 0;
    return renderedSeconds + alGetSourcef(sourceID, AL11.AL_SEC_OFFSET);
}
