public final void uniformMatrix3fv(WebGLUniformLocation location, boolean transpose, float[] value) {
    this.uniformMatrix3fv(location, transpose, toJsArray(value));
}
