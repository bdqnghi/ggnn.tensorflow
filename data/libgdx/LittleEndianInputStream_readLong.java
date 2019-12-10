public long readLong() throws IOException {
    int[] res = new int[8];
    for (int i = 7; i >= 0; i--) res[i] = din.read();
    return (((long) (res[0] & 0xff) << 56) | ((long) (res[1] & 0xff) << 48) | ((long) (res[2] & 0xff) << 40) | ((long) (res[3] & 0xff) << 32) | ((long) (res[4] & 0xff) << 24) | ((long) (res[5] & 0xff) << 16) | ((long) (res[6] & 0xff) << 8) | ((long) (res[7] & 0xff)));
}
