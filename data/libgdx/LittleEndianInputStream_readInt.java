public int readInt() throws IOException {
    int[] res = new int[4];
    for (int i = 3; i >= 0; i--) res[i] = din.read();
    return ((res[0] & 0xff) << 24) | ((res[1] & 0xff) << 16) | ((res[2] & 0xff) << 8) | (res[3] & 0xff);
}
