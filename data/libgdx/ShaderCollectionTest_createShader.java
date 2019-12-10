@Override
protected Shader createShader(Renderable renderable) {
    if (config.vertexShader != null && config.fragmentShader != null && tempFolder != null && Gdx.app.getType() == ApplicationType.Desktop) {
        String prefix = DefaultShader.createPrefix(renderable, config);
        Gdx.files.absolute(tempFolder).child(name + ".vertex.glsl").writeString(prefix + config.vertexShader, false);
        Gdx.files.absolute(tempFolder).child(name + ".fragment.glsl").writeString(prefix + config.fragmentShader, false);
    }
    BaseShader result = new MultiPassShader(renderable, config);
    if (tempFolder != null && Gdx.app.getType() == ApplicationType.Desktop)
        Gdx.files.absolute(tempFolder).child(name + ".log.txt").writeString(result.program.getLog(), false);
    return result;
}
