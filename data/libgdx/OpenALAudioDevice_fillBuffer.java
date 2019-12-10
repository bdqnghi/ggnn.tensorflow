/**
 * Blocks until some of the data could be buffered.
 */
private int fillBuffer(byte[] data, int offset, int length) {
    int written = Math.min(bufferSize, length);
    outer: while (true) {
        int buffers = alGetSourcei(sourceID, AL_BUFFERS_PROCESSED);
        while (buffers-- > 0) {
            int bufferID = alSourceUnqueueBuffers(sourceID);
            if (bufferID == AL_INVALID_VALUE)
                break;
            renderedSeconds += secondsPerBuffer;
            tempBuffer.clear();
            tempBuffer.put(data, offset, written).flip();
            alBufferData(bufferID, format, tempBuffer, sampleRate);
            alSourceQueueBuffers(sourceID, bufferID);
            break outer;
        }
        // Wait for buffer to be free.
        try {
            Thread.sleep((long) (1000 * secondsPerBuffer / bufferCount));
        } catch (InterruptedException ignored) {
        }
    }
    // A buffer underflow will cause the source to stop.
    if (!isPlaying || alGetSourcei(sourceID, AL_SOURCE_STATE) != AL_PLAYING) {
        alSourcePlay(sourceID);
        isPlaying = true;
    }
    return written;
}
