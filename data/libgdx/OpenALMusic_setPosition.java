public void setPosition(float position) {
    if (audio.noDevice)
        return;
    if (sourceID == -1)
        return;
    boolean wasPlaying = isPlaying;
    isPlaying = false;
    alSourceStop(sourceID);
    alSourceUnqueueBuffers(sourceID, buffers);
    renderedSeconds += (secondsPerBuffer * bufferCount);
    if (position <= renderedSeconds) {
        reset();
        renderedSeconds = 0;
    }
    while (renderedSeconds < (position - secondsPerBuffer)) {
        if (read(tempBytes) <= 0)
            break;
        renderedSeconds += secondsPerBuffer;
    }
    boolean filled = false;
    for (int i = 0; i < bufferCount; i++) {
        int bufferID = buffers.get(i);
        if (!fill(bufferID))
            break;
        filled = true;
        alSourceQueueBuffers(sourceID, bufferID);
    }
    if (!filled) {
        stop();
        if (onCompletionListener != null)
            onCompletionListener.onCompletion(this);
    }
    alSourcef(sourceID, AL11.AL_SEC_OFFSET, position - renderedSeconds);
    if (wasPlaying) {
        alSourcePlay(sourceID);
        isPlaying = true;
    }
}
