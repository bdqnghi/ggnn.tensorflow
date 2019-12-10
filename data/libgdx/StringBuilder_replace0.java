final void replace0(int start, int end, String string) {
    if (start >= 0) {
        if (end > length) {
            end = length;
        }
        if (end > start) {
            int stringLength = string.length();
            int diff = end - start - stringLength;
            if (diff > 0) {
                // replacing with fewer characters
                // index == count case is no-op
                System.arraycopy(chars, end, chars, start + stringLength, length - end);
            } else if (diff < 0) {
                // replacing with more characters...need some room
                move(-diff, end);
            }
            string.getChars(0, stringLength, chars, start);
            length -= diff;
            return;
        }
        if (start == end) {
            if (string == null) {
                throw new NullPointerException();
            }
            insert0(start, string);
            return;
        }
    }
    throw new StringIndexOutOfBoundsException();
}
