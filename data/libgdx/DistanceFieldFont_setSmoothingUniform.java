private void setSmoothingUniform(Batch spriteBatch, float smoothing) {
    spriteBatch.flush();
    spriteBatch.getShader().setUniformf("u_smoothing", smoothing);
}
