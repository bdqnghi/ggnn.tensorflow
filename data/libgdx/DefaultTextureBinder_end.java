@Override
public void end() {
    /*
		 * No need to unbind and textures are set to null in begin() for(int i = 0; i < count; i++) { if (textures[i] != null) {
		 * Gdx.gl.glActiveTexture(GL20.GL_TEXTURE0 + offset + i); Gdx.gl.glBindTexture(GL20.GL_TEXTURE_2D, 0); textures[i] = null; }
		 * }
		 */
    Gdx.gl.glActiveTexture(GL20.GL_TEXTURE0);
}
