/**
 * Initialize this shader, causing all registered uniforms/attributes to be fetched.
 */
public void init(final ShaderProgram program, final Renderable renderable) {
    if (locations != null)
        throw new GdxRuntimeException("Already initialized");
    if (!program.isCompiled())
        throw new GdxRuntimeException(program.getLog());
    this.program = program;
    final int n = uniforms.size;
    locations = new int[n];
    for (int i = 0; i < n; i++) {
        final String input = uniforms.get(i);
        final Validator validator = validators.get(i);
        final Setter setter = setters.get(i);
        if (validator != null && !validator.validate(this, i, renderable))
            locations[i] = -1;
        else {
            locations[i] = program.fetchUniformLocation(input, false);
            if (locations[i] >= 0 && setter != null) {
                if (setter.isGlobal(this, i))
                    globalUniforms.add(i);
                else
                    localUniforms.add(i);
            }
        }
        if (locations[i] < 0) {
            validators.set(i, null);
            setters.set(i, null);
        }
    }
    if (renderable != null) {
        final VertexAttributes attrs = renderable.meshPart.mesh.getVertexAttributes();
        final int c = attrs.size();
        for (int i = 0; i < c; i++) {
            final VertexAttribute attr = attrs.get(i);
            final int location = program.getAttributeLocation(attr.alias);
            if (location >= 0)
                attributes.put(attr.getKey(), location);
        }
    }
}
