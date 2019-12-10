/**
 * @return A hash code based on only the attribute values, which might be different compared to {@link #hashCode()} because the latter
 * might include other properties as well, i.e. the material id.
 */
public int attributesHash() {
    sort();
    final int n = attributes.size;
    long result = 71 + mask;
    int m = 1;
    for (int i = 0; i < n; i++) result += mask * attributes.get(i).hashCode() * (m = (m * 7) & 0xFFFF);
    return (int) (result ^ (result >> 32));
}
