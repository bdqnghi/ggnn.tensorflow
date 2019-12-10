private void checkManaged() {
    if (invalidated) {
        compileShaders(vertexShaderSource, fragmentShaderSource);
        invalidated = false;
    }
}
