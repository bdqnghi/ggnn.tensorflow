@Override
public AudioRecorder newAudioRecorder(int samplingRate, boolean isMono) {
    return new MockAudioRecorder();
}
