@Override
public void set(BaseShader shader, int inputID, Renderable renderable, Attributes combinedAttributes) {
    if (combinedAttributes.has(CubemapAttribute.EnvironmentMap)) {
        shader.set(inputID, shader.context.textureBinder.bind(((CubemapAttribute) combinedAttributes.get(CubemapAttribute.EnvironmentMap)).textureDescription));
    }
}
