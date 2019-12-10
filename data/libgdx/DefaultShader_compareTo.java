@Override
public int compareTo(Shader other) {
    if (other == null)
        return -1;
    if (other == this)
        return 0;
    // FIXME compare shaders on their impact on performance
    return 0;
}
