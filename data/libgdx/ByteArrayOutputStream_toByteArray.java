public byte[] toByteArray() {
    byte[] result = new byte[count];
    System.arraycopy(buf, 0, result, 0, count);
    return result;
}
