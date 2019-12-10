@Override
public AudioDevice newAudioDevice(int samplingRate, boolean isMono) {
    return new MockAudioDevice();
}
