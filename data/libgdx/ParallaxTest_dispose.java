@Override
public void dispose() {
    layers[0].getTexture().dispose();
    batch.dispose();
    font.dispose();
}
