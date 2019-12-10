/**
 * Renders a group of vertices to the buffer, flushing them to GL when done/full
 *
 * @param decals Decals to render
 */
private void render(ShaderProgram shader, Array<Decal> decals) {
    // batch vertices
    DecalMaterial lastMaterial = null;
    int idx = 0;
    for (Decal decal : decals) {
        if (lastMaterial == null || !lastMaterial.equals(decal.getMaterial())) {
            if (idx > 0) {
                flush(shader, idx);
                idx = 0;
            }
            decal.material.set();
            lastMaterial = decal.material;
        }
        decal.update();
        System.arraycopy(decal.vertices, 0, vertices, idx, decal.vertices.length);
        idx += decal.vertices.length;
        // if our batch is full we have to flush it
        if (idx == vertices.length) {
            flush(shader, idx);
            idx = 0;
        }
    }
    // at the end if there is stuff left in the batch we render that
    if (idx > 0) {
        flush(shader, idx);
    }
}
