void setTextureFilter(int filter) {
    atlas.findRegion("map").getTexture().bind();
    Gdx.gl.glTexParameterf(GL20.GL_TEXTURE_2D, GL20.GL_TEXTURE_MIN_FILTER, filters[filter]);
    texture.bind();
    Gdx.gl.glTexParameterf(GL20.GL_TEXTURE_2D, GL20.GL_TEXTURE_MIN_FILTER, filters[filter]);
}
