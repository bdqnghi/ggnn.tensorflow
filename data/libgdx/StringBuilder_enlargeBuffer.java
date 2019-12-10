private void enlargeBuffer(int min) {
    int newSize = (chars.length >> 1) + chars.length + 2;
    char[] newData = new char[min > newSize ? min : newSize];
    System.arraycopy(chars, 0, newData, 0, length);
    chars = newData;
}
