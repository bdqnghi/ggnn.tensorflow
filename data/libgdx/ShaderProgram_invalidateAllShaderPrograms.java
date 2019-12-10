/**
 * Invalidates all shaders so the next time they are used new handles are generated
 * @param app
 */
public static void invalidateAllShaderPrograms(Application app) {
    if (Gdx.gl20 == null)
        return;
    Array<ShaderProgram> shaderArray = shaders.get(app);
    if (shaderArray == null)
        return;
    for (int i = 0; i < shaderArray.size; i++) {
        shaderArray.get(i).invalidated = true;
        shaderArray.get(i).checkManaged();
    }
}
