@Override
public void dispose() {
    batch.dispose();
    font.dispose();
    atlas.dispose();
    region.getTexture().dispose();
    stage.dispose();
}
