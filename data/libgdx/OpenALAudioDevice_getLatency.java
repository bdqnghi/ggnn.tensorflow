public int getLatency() {
    return (int) (secondsPerBuffer * bufferCount * 1000);
}
