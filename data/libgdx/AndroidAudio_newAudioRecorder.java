/**
 * {@inheritDoc}
 */
@Override
public AudioRecorder newAudioRecorder(int samplingRate, boolean isMono) {
    if (soundPool == null) {
        throw new GdxRuntimeException("Android audio is not enabled by the application config.");
    }
    return new AndroidAudioRecorder(samplingRate, isMono);
}
