protected void setup(int channels, int sampleRate) {
    this.format = channels > 1 ? AL_FORMAT_STEREO16 : AL_FORMAT_MONO16;
    this.sampleRate = sampleRate;
    secondsPerBuffer = (float) (bufferSize - bufferOverhead) / (bytesPerSample * channels * sampleRate);
}
