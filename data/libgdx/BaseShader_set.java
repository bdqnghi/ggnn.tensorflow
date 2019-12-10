public final boolean set(final int uniform, final GLTexture texture) {
    if (locations[uniform] < 0)
        return false;
    program.setUniformi(locations[uniform], context.textureBinder.bind(texture));
    return true;
}
