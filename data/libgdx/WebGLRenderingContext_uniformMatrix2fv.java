public final void uniformMatrix2fv(WebGLUniformLocation location, boolean transpose, float[] value) {
    this.uniformMatrix2fv(location, transpose, toJsArray(value));
}
