public int read(char[] b, int offset, int length) throws IOException {
    int count = 0;
    if (position >= limit && length < buffer.length) {
        fill();
    }
    if (position < limit) {
        int remaining = limit - position;
        if (remaining > length) {
            remaining = length;
        }
        System.arraycopy(buffer, position, b, offset, remaining);
        count += remaining;
        position += remaining;
        offset += remaining;
        length -= remaining;
    }
    if (length > 0) {
        int c = in.read(b, offset, length);
        if (c == -1) {
            if (count == 0) {
                count = -1;
            }
        } else {
            count += c;
        }
    }
    return count;
}
