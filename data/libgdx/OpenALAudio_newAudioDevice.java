public AudioDevice newAudioDevice(int sampleRate, final boolean isMono) {
    if (noDevice)
        return new AudioDevice() {

            @Override
            public void writeSamples(float[] samples, int offset, int numSamples) {
            }

            @Override
            public void writeSamples(short[] samples, int offset, int numSamples) {
            }

            @Override
            public void setVolume(float volume) {
            }

            @Override
            public boolean isMono() {
                return isMono;
            }

            @Override
            public int getLatency() {
                return 0;
            }

            @Override
            public void dispose() {
            }
        };
    return new OpenALAudioDevice(this, sampleRate, isMono, deviceBufferSize, deviceBufferCount);
}
