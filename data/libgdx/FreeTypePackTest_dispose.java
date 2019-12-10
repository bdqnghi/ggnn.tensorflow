@Override
public void dispose() {
    super.dispose();
    for (TextureRegion r : regions) // dispose the texture since we own it
    r.getTexture().dispose();
    batch.dispose();
}
