private void renderMesh(ShaderProgram shader, Matrix4 cam, Matrix4 projector, Matrix4 model, Mesh mesh, Color color) {
    position.set(this.projector.position);
    modelNormal.set(model).toNormalMatrix();
    shader.setUniformMatrix("u_camera", cam);
    shader.setUniformMatrix("u_projector", projector);
    shader.setUniformf("u_projectorPos", position.x, position.y, position.z);
    shader.setUniformMatrix("u_model", model);
    shader.setUniformMatrix("u_modelNormal", modelNormal);
    shader.setUniformf("u_color", color.r, color.g, color.b);
    shader.setUniformi("u_texture", 0);
    mesh.render(shader, GL20.GL_TRIANGLES);
}
