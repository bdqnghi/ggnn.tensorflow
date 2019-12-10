private final int bindTexture(final TextureDescriptor textureDesc, final boolean rebind) {
    final int idx, result;
    final GLTexture texture = textureDesc.texture;
    reused = false;
    switch(method) {
        case ROUNDROBIN:
            result = offset + (idx = bindTextureRoundRobin(texture));
            break;
        case WEIGHTED:
            result = offset + (idx = bindTextureWeighted(texture));
            break;
        default:
            return -1;
    }
    if (reused) {
        reuseCount++;
        if (rebind)
            texture.bind(result);
        else
            Gdx.gl.glActiveTexture(GL20.GL_TEXTURE0 + result);
    } else
        bindCount++;
    texture.unsafeSetWrap(textureDesc.uWrap, textureDesc.vWrap);
    texture.unsafeSetFilter(textureDesc.minFilter, textureDesc.magFilter);
    return result;
}
