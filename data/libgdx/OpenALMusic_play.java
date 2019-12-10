public void play() {
    if (audio.noDevice)
        return;
    if (sourceID == -1) {
        sourceID = audio.obtainSource(true);
        if (sourceID == -1)
            return;
        audio.music.add(this);
        if (buffers == null) {
            buffers = BufferUtils.createIntBuffer(bufferCount);
            alGenBuffers(buffers);
            if (alGetError() != AL_NO_ERROR)
                throw new GdxRuntimeException("Unable to allocate audio buffers.");
        }
        alSourcei(sourceID, AL_LOOPING, AL_FALSE);
        setPan(pan, volume);
        // Check if there's anything to actually play.
        boolean filled = false;
        for (int i = 0; i < bufferCount; i++) {
            int bufferID = buffers.get(i);
            if (!fill(bufferID))
                break;
            filled = true;
            alSourceQueueBuffers(sourceID, bufferID);
        }
        if (!filled && onCompletionListener != null)
            onCompletionListener.onCompletion(this);
        if (alGetError() != AL_NO_ERROR) {
            stop();
            return;
        }
    }
    if (!isPlaying) {
        alSourcePlay(sourceID);
        isPlaying = true;
    }
}
