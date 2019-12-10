@Override
public int compareTo(TextureDescriptor<T> o) {
    if (o == this)
        return 0;
    int t1 = texture == null ? 0 : texture.glTarget;
    int t2 = o.texture == null ? 0 : o.texture.glTarget;
    if (t1 != t2)
        return t1 - t2;
    int h1 = texture == null ? 0 : texture.getTextureObjectHandle();
    int h2 = o.texture == null ? 0 : o.texture.getTextureObjectHandle();
    if (h1 != h2)
        return h1 - h2;
    if (minFilter != o.minFilter)
        return (minFilter == null ? 0 : minFilter.getGLEnum()) - (o.minFilter == null ? 0 : o.minFilter.getGLEnum());
    if (magFilter != o.magFilter)
        return (magFilter == null ? 0 : magFilter.getGLEnum()) - (o.magFilter == null ? 0 : o.magFilter.getGLEnum());
    if (uWrap != o.uWrap)
        return (uWrap == null ? 0 : uWrap.getGLEnum()) - (o.uWrap == null ? 0 : o.uWrap.getGLEnum());
    if (vWrap != o.vWrap)
        return (vWrap == null ? 0 : vWrap.getGLEnum()) - (o.vWrap == null ? 0 : o.vWrap.getGLEnum());
    return 0;
}
