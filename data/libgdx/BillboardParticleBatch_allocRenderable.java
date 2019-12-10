protected Renderable allocRenderable() {
    Renderable renderable = new Renderable();
    renderable.meshPart.primitiveType = GL20.GL_TRIANGLES;
    renderable.meshPart.offset = 0;
    renderable.material = new Material(this.blendingAttribute, this.depthTestAttribute, TextureAttribute.createDiffuse(texture));
    renderable.meshPart.mesh = new Mesh(false, MAX_VERTICES_PER_MESH, MAX_PARTICLES_PER_MESH * 6, currentAttributes);
    renderable.meshPart.mesh.setIndices(indices);
    renderable.shader = shader;
    return renderable;
}
