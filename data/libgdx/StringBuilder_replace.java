/**
 * Replaces all instances of {@code find} with {@code replace}.
 */
public StringBuilder replace(char find, String replace) {
    int replaceLength = replace.length();
    int index = 0;
    while (true) {
        while (true) {
            if (index == length)
                return this;
            if (chars[index] == find)
                break;
            index++;
        }
        replace0(index, index + 1, replace);
        index += replaceLength;
    }
}
