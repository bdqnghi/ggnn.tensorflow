@Override
public boolean touchUp(int screenX, int screenY, int pointer, int button) {
    if (!material.has(TextureAttribute.Diffuse))
        material.set(textureAttribute);
    else if (!material.has(ColorAttribute.Diffuse))
        material.set(colorAttribute);
    else if (!material.has(BlendingAttribute.Type))
        material.set(blendingAttribute);
    else
        material.clear();
    return super.touchUp(screenX, screenY, pointer, button);
}
