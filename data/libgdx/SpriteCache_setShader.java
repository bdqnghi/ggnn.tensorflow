/**
 * Sets the shader to be used in a GLES 2.0 environment. Vertex position attribute is called "a_position", the texture
 * coordinates attribute is called called "a_texCoords", the color attribute is called "a_color". The projection matrix is
 * uploaded via a mat4 uniform called "u_proj", the transform matrix is uploaded via a uniform called "u_trans", the combined
 * transform and projection matrx is is uploaded via a mat4 uniform called "u_projTrans". The texture sampler is passed via a
 * uniform called "u_texture".
 *
 * Call this method with a null argument to use the default shader.
 *
 * @param shader the {@link ShaderProgram} or null to use the default shader.
 */
public void setShader(ShaderProgram shader) {
    customShader = shader;
}
