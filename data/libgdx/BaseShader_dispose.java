@Override
public void dispose() {
    program = null;
    uniforms.clear();
    validators.clear();
    setters.clear();
    localUniforms.clear();
    globalUniforms.clear();
    locations = null;
}
