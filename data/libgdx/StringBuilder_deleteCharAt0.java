final void deleteCharAt0(int location) {
    if (0 > location || location >= length) {
        throw new StringIndexOutOfBoundsException(location);
    }
    int count = length - location - 1;
    if (count > 0) {
        System.arraycopy(chars, location + 1, chars, location, count);
    }
    length--;
}
