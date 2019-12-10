public void read(short[] samples, int offset, int numSamples) {
    if (buffer.length < numSamples * 2)
        buffer = new byte[numSamples * 2];
    int toRead = numSamples * 2;
    int read = 0;
    while (read != toRead) read += line.read(buffer, read, toRead - read);
    for (int i = 0, j = 0; i < numSamples * 2; i += 2, j++) samples[offset + j] = (short) ((buffer[i + 1] << 8) | (buffer[i] & 0xff));
}
