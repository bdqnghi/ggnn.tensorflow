void setup(byte[] pcm, int channels, int sampleRate) {
    int bytes = pcm.length - (pcm.length % (channels > 1 ? 4 : 2));
    int samples = bytes / (2 * channels);
    duration = samples / (float) sampleRate;
    ByteBuffer buffer = ByteBuffer.allocateDirect(bytes);
    buffer.order(ByteOrder.nativeOrder());
    buffer.put(pcm, 0, bytes);
    buffer.flip();
    if (bufferID == -1) {
        bufferID = alGenBuffers();
        alBufferData(bufferID, channels > 1 ? AL_FORMAT_STEREO16 : AL_FORMAT_MONO16, buffer.asShortBuffer(), sampleRate);
    }
}
