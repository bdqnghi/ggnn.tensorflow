@Override
public void bind(ShaderProgram shader, int[] locations) {
    GL30 gl = Gdx.gl30;
    if (vaoDirty || !gl.glIsVertexArray(vaoHandle)) {
        // initialize the VAO with our vertex attributes and buffer:
        tmpHandle.clear();
        gl.glGenVertexArrays(1, tmpHandle);
        vaoHandle = tmpHandle.get(0);
        gl.glBindVertexArray(vaoHandle);
        vaoDirty = false;
    } else {
        // else simply bind the VAO.
        gl.glBindVertexArray(vaoHandle);
    }
    bindAttributes(shader, locations);
    // if our data has changed upload it:
    bindData(gl);
    isBound = true;
}
