/**
 * @return The {@link TextureData} for the specified side, can be null if the cubemap is incomplete.
 */
public TextureData getTextureData(CubemapSide side) {
    return data[side.index];
}
