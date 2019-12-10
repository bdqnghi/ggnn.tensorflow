@Override
public void writeSamples(float[] samples, int offset, int numSamples) {
    if (buffer.length < samples.length)
        buffer = new short[samples.length];
    int bound = offset + numSamples;
    for (int i = offset, j = 0; i < bound; i++, j++) {
        float fValue = samples[i];
        if (fValue > 1)
            fValue = 1;
        if (fValue < -1)
            fValue = -1;
        short value = (short) (fValue * Short.MAX_VALUE);
        buffer[j] = value;
    }
    int writtenSamples = track.write(buffer, 0, numSamples);
    while (writtenSamples != numSamples) writtenSamples += track.write(buffer, writtenSamples, numSamples - writtenSamples);
}
