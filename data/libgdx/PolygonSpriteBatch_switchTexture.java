private void switchTexture(Texture texture) {
    flush();
    lastTexture = texture;
    invTexWidth = 1.0f / texture.getWidth();
    invTexHeight = 1.0f / texture.getHeight();
}
