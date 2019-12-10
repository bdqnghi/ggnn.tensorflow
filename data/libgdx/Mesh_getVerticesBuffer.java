/**
 * @return the backing FloatBuffer holding the vertices. Does not have to be a direct buffer on Android!
 */
public FloatBuffer getVerticesBuffer() {
    return vertices.getBuffer();
}
