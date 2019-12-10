@Override
public void dispose() {
    spriteBatch.dispose();
    regularTexture.dispose();
    distanceFieldTexture.dispose();
    descriptionFont.dispose();
    regularFont.dispose();
    distanceFieldFont.dispose();
    distanceFieldShader.dispose();
}
