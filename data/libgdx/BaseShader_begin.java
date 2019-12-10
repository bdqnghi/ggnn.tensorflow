@Override
public void begin(Camera camera, RenderContext context) {
    this.camera = camera;
    this.context = context;
    program.begin();
    currentMesh = null;
    for (int u, i = 0; i < globalUniforms.size; ++i) if (setters.get(u = globalUniforms.get(i)) != null)
        setters.get(u).set(this, u, null, null);
}
