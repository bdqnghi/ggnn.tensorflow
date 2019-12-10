// 2-byte number
static private int swapEndian(short i) {
    return ((i & 0x00FF) << 8 | (i & 0xFF00) >>> 8);
}
