@Override
public void beforeGroup(int group, Array<Decal> contents) {
    if (group == GROUP_BLEND) {
        Sort.instance().sort(contents, comparator);
        Gdx.gl.glEnable(GL20.GL_BLEND);
        // no need for writing into the z buffer if transparent decals are the last thing to be rendered
        // and they are rendered back to front
        Gdx.gl.glDepthMask(false);
    } else {
    // FIXME sort by material
    }
}
