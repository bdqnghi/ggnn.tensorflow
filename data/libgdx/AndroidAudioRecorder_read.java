@Override
public void read(short[] samples, int offset, int numSamples) {
    int read = 0;
    while (read != numSamples) {
        read += recorder.read(samples, offset + read, numSamples - read);
    }
}
