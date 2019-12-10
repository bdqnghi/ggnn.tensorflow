public void writeSamples(byte[] data, int offset, int length) {
    if (length < 0)
        throw new IllegalArgumentException("length cannot be < 0.");
    if (sourceID == -1) {
        sourceID = audio.obtainSource(true);
        if (sourceID == -1)
            return;
        if (buffers == null) {
            buffers = BufferUtils.createIntBuffer(bufferCount);
            alGenBuffers(buffers);
            if (alGetError() != AL_NO_ERROR)
                throw new GdxRuntimeException("Unabe to allocate audio buffers.");
        }
        alSourcei(sourceID, AL_LOOPING, AL_FALSE);
        alSourcef(sourceID, AL_GAIN, volume);
        // Fill initial buffers.
        int queuedBuffers = 0;
        for (int i = 0; i < bufferCount; i++) {
            int bufferID = buffers.get(i);
            int written = Math.min(bufferSize, length);
            tempBuffer.clear();
            tempBuffer.put(data, offset, written).flip();
            alBufferData(bufferID, format, tempBuffer, sampleRate);
            alSourceQueueBuffers(sourceID, bufferID);
            length -= written;
            offset += written;
            queuedBuffers++;
        }
        // Queue rest of buffers, empty.
        tempBuffer.clear().flip();
        for (int i = queuedBuffers; i < bufferCount; i++) {
            int bufferID = buffers.get(i);
            alBufferData(bufferID, format, tempBuffer, sampleRate);
            alSourceQueueBuffers(sourceID, bufferID);
        }
        alSourcePlay(sourceID);
        isPlaying = true;
    }
    while (length > 0) {
        int written = fillBuffer(data, offset, length);
        length -= written;
        offset += written;
    }
}
