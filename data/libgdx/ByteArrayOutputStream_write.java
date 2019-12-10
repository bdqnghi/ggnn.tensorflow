@Override
public void write(int b) {
    if (buf.length == count) {
        byte[] newBuf = new byte[buf.length * 3 / 2];
        System.arraycopy(buf, 0, newBuf, 0, count);
        buf = newBuf;
    }
    buf[count++] = (byte) b;
}
