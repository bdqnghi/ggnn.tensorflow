@Override
public TextureDescriptor getDepthMap() {
    textureDesc.texture = fbo.getColorBufferTexture();
    return textureDesc;
}
