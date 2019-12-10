public AudioRecorder newAudioRecorder(int samplingRate, boolean isMono) {
    if (noDevice)
        return new AudioRecorder() {

            @Override
            public void read(short[] samples, int offset, int numSamples) {
            }

            @Override
            public void dispose() {
            }
        };
    return new JavaSoundAudioRecorder(samplingRate, isMono);
}
