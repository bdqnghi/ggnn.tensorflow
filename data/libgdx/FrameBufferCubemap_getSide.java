/**
 * Get the currently bound side.
 */
public Cubemap.CubemapSide getSide() {
    return currentSide < 0 ? null : Cubemap.CubemapSide.values()[currentSide];
}
