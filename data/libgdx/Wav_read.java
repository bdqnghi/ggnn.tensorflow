public int read(byte[] buffer) throws IOException {
    if (dataRemaining == 0)
        return -1;
    int length = Math.min(super.read(buffer), dataRemaining);
    if (length == -1)
        return -1;
    dataRemaining -= length;
    return length;
}
