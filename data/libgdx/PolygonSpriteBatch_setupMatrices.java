private void setupMatrices() {
    combinedMatrix.set(projectionMatrix).mul(transformMatrix);
    if (customShader != null) {
        customShader.setUniformMatrix("u_projTrans", combinedMatrix);
        customShader.setUniformi("u_texture", 0);
    } else {
        shader.setUniformMatrix("u_projTrans", combinedMatrix);
        shader.setUniformi("u_texture", 0);
    }
}
