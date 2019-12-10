private String getRepeatValue() {
    if (settings.wrapX == TextureWrap.Repeat && settings.wrapY == TextureWrap.Repeat)
        return "xy";
    if (settings.wrapX == TextureWrap.Repeat && settings.wrapY == TextureWrap.ClampToEdge)
        return "x";
    if (settings.wrapX == TextureWrap.ClampToEdge && settings.wrapY == TextureWrap.Repeat)
        return "y";
    return "none";
}
