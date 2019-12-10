@Override
public AudioRecorder newAudioRecorder(int samplingRate, boolean isMono) {
    throw new GdxRuntimeException("AudioRecorder not supported by GWT backend");
}
