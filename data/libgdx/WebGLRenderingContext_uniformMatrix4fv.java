public final void uniformMatrix4fv(WebGLUniformLocation location, boolean transpose, float[] value) {
    uniformMatrix4fv(location, transpose, toJsArray(value));
}
