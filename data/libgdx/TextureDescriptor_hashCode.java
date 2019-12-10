@Override
public int hashCode() {
    long result = (texture == null ? 0 : texture.glTarget);
    result = 811 * result + (texture == null ? 0 : texture.getTextureObjectHandle());
    result = 811 * result + (minFilter == null ? 0 : minFilter.getGLEnum());
    result = 811 * result + (magFilter == null ? 0 : magFilter.getGLEnum());
    result = 811 * result + (uWrap == null ? 0 : uWrap.getGLEnum());
    result = 811 * result + (vWrap == null ? 0 : vWrap.getGLEnum());
    return (int) (result ^ (result >> 32));
}
