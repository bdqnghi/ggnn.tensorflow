public void setCullFace(final int face) {
    if (face != cullFace) {
        cullFace = face;
        if ((face == GL20.GL_FRONT) || (face == GL20.GL_BACK) || (face == GL20.GL_FRONT_AND_BACK)) {
            Gdx.gl.glEnable(GL20.GL_CULL_FACE);
            Gdx.gl.glCullFace(face);
        } else
            Gdx.gl.glDisable(GL20.GL_CULL_FACE);
    }
}
