@Override
public void dispose() {
    batch.dispose();
    stage.dispose();
    skin.dispose();
    font.dispose();
    if (texture != null)
        texture.dispose();
}
