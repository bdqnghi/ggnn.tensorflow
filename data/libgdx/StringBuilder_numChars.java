/**
 * @return the number of characters required to represent the specified value with the specified radix
 */
public static int numChars(long value, int radix) {
    int result = (value < 0) ? 2 : 1;
    while ((value /= radix) != 0) ++result;
    return result;
}
