public <V extends T> void set(final TextureDescriptor<V> other) {
    texture = other.texture;
    minFilter = other.minFilter;
    magFilter = other.magFilter;
    uWrap = other.uWrap;
    vWrap = other.vWrap;
}
