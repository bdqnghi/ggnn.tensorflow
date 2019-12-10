public static String createPrefix(final Renderable renderable, final Config config) {
    String prefix = "";
    if (Gdx.app.getType() == ApplicationType.Desktop)
        prefix += "#version 120\n";
    else
        prefix += "#version 100\n";
    if (config.type == ParticleType.Billboard) {
        prefix += "#define billboard\n";
        if (config.align == AlignMode.Screen)
            prefix += "#define screenFacing\n";
        else if (config.align == AlignMode.ViewPoint)
            prefix += "#define viewPointFacing\n";
    // else if(config.align == AlignMode.ParticleDirection)
    // prefix += "#define paticleDirectionFacing\n";
    }
    return prefix;
}
