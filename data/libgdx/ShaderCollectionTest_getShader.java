@Override
public Shader getShader(Renderable renderable) {
    try {
        return super.getShader(renderable);
    } catch (Throwable e) {
        if (tempFolder != null && Gdx.app.getType() == ApplicationType.Desktop)
            Gdx.files.absolute(tempFolder).child(name + ".log.txt").writeString(e.getMessage(), false);
        if (!revert()) {
            Gdx.app.error("ShaderCollectionTest", e.getMessage());
            throw new GdxRuntimeException("Error creating shader, cannot revert to default shader", e);
        }
        error = true;
        Gdx.app.error("ShaderTest", "Could not create shader, reverted to default shader.", e);
        return super.getShader(renderable);
    }
}
