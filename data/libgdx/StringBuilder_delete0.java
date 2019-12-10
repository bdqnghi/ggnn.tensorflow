final void delete0(int start, int end) {
    if (start >= 0) {
        if (end > length) {
            end = length;
        }
        if (end == start) {
            return;
        }
        if (end > start) {
            int count = length - end;
            if (count >= 0)
                System.arraycopy(chars, end, chars, start, count);
            length -= end - start;
            return;
        }
    }
    throw new StringIndexOutOfBoundsException();
}
