/**
 * End building the mesh and returns the mesh
 */
public Mesh end() {
    return end(new Mesh(true, vertices.size / stride, indices.size, attributes));
}
