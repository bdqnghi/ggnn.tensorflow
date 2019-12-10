/**
 * Sets whether to bind the underlying {@link VertexArray} or {@link VertexBufferObject} automatically on a call to one of the
 * render methods. Usually you want to use autobind. Manual binding is an expert functionality. There is a driver bug on the
 * MSM720xa chips that will fuck up memory if you manipulate the vertices and indices of a Mesh multiple times while it is
 * bound. Keep this in mind.
 *
 * @param autoBind whether to autobind meshes.
 */
public void setAutoBind(boolean autoBind) {
    this.autoBind = autoBind;
}
