/**
 * Ensures that this object has a minimum capacity available before requiring the internal buffer to be enlarged. The general
 * policy of this method is that if the {@code minimumCapacity} is larger than the current {@link #capacity()}, then the
 * capacity will be increased to the largest value of either the {@code minimumCapacity} or the current capacity multiplied by
 * two plus two. Although this is the general policy, there is no guarantee that the capacity will change.
 *
 * @param min the new minimum capacity to set.
 */
public void ensureCapacity(int min) {
    if (min > chars.length) {
        int twice = (chars.length << 1) + 2;
        enlargeBuffer(twice > min ? twice : min);
    }
}
