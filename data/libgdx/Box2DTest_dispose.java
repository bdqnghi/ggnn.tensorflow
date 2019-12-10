@Override
public void dispose() {
    world.dispose();
    renderer.dispose();
    debugRenderer.dispose();
    font.dispose();
    textureRegion.getTexture().dispose();
}
