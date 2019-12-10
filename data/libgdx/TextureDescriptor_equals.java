@Override
public boolean equals(Object obj) {
    if (obj == null)
        return false;
    if (obj == this)
        return true;
    if (!(obj instanceof TextureDescriptor))
        return false;
    final TextureDescriptor<?> other = (TextureDescriptor<?>) obj;
    return other.texture == texture && other.minFilter == minFilter && other.magFilter == magFilter && other.uWrap == uWrap && other.vWrap == vWrap;
}
