@Override
public AudioDevice newAudioDevice(int samplingRate, boolean isMono) {
    throw new GdxRuntimeException("AudioDevice not supported by GWT backend");
}
