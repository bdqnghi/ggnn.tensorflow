/**
 * Sets an array of uniform matrices with the given name. The {@link ShaderProgram} must be bound for this to work.
 *
 * @param name the name of the uniform
 * @param buffer buffer containing the matrix data
 * @param transpose whether the uniform matrix should be transposed
 */
public void setUniformMatrix3fv(String name, FloatBuffer buffer, int count, boolean transpose) {
    GL20 gl = Gdx.gl20;
    checkManaged();
    buffer.position(0);
    int location = fetchUniformLocation(name);
    gl.glUniformMatrix3fv(location, count, transpose, buffer);
}
