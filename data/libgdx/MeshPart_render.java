/**
 * Renders the mesh part using the specified shader, must be called in between {@link ShaderProgram#begin()} and
 * {@link ShaderProgram#end()}.
 * @param shader the shader to be used
 */
public void render(ShaderProgram shader) {
    mesh.render(shader, primitiveType, offset, size);
}
