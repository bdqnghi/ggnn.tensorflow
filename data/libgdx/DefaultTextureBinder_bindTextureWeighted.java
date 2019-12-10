private final int bindTextureWeighted(final GLTexture texture) {
    int result = -1;
    int weight = weights[0];
    int windex = 0;
    for (int i = 0; i < count; i++) {
        if (textures[i] == texture) {
            result = i;
            weights[i] += reuseWeight;
        } else if (weights[i] < 0 || --weights[i] < weight) {
            weight = weights[i];
            windex = i;
        }
    }
    if (result < 0) {
        textures[windex] = texture;
        weights[windex] = 100;
        texture.bind(offset + (result = windex));
    } else
        reused = true;
    return result;
}
