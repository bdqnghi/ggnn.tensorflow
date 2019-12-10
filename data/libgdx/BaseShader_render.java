public void render(Renderable renderable, final Attributes combinedAttributes) {
    for (int u, i = 0; i < localUniforms.size; ++i) if (setters.get(u = localUniforms.get(i)) != null)
        setters.get(u).set(this, u, renderable, combinedAttributes);
    if (currentMesh != renderable.meshPart.mesh) {
        if (currentMesh != null)
            currentMesh.unbind(program, tempArray.items);
        currentMesh = renderable.meshPart.mesh;
        currentMesh.bind(program, getAttributeLocations(renderable.meshPart.mesh.getVertexAttributes()));
    }
    renderable.meshPart.render(program, false);
}
