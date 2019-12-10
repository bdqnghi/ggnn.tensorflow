public void update() {
    if (audio.noDevice)
        return;
    if (sourceID == -1)
        return;
    boolean end = false;
    int buffers = alGetSourcei(sourceID, AL_BUFFERS_PROCESSED);
    while (buffers-- > 0) {
        int bufferID = alSourceUnqueueBuffers(sourceID);
        if (bufferID == AL_INVALID_VALUE)
            break;
        renderedSeconds += secondsPerBuffer;
        if (end)
            continue;
        if (fill(bufferID))
            alSourceQueueBuffers(sourceID, bufferID);
        else
            end = true;
    }
    if (end && alGetSourcei(sourceID, AL_BUFFERS_QUEUED) == 0) {
        stop();
        if (onCompletionListener != null)
            onCompletionListener.onCompletion(this);
    }
    // A buffer underflow will cause the source to stop.
    if (isPlaying && alGetSourcei(sourceID, AL_SOURCE_STATE) != AL_PLAYING)
        alSourcePlay(sourceID);
}
