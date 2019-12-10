public void setUniformMatrix(int location, Matrix3 matrix, boolean transpose) {
    GL20 gl = Gdx.gl20;
    checkManaged();
    gl.glUniformMatrix3fv(location, 1, transpose, matrix.val, 0);
}
