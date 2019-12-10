private void move(int size, int index) {
    if (chars.length - length >= size) {
        // index == count case is no-op
        System.arraycopy(chars, index, chars, index + size, length - index);
        return;
    }
    int a = length + size, b = (chars.length << 1) + 2;
    int newSize = a > b ? a : b;
    char[] newData = new char[newSize];
    System.arraycopy(chars, 0, newData, 0, index);
    // index == count case is no-op
    System.arraycopy(chars, index, newData, index + size, length - index);
    chars = newData;
}
