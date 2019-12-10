private Material convertMaterial(ModelMaterial mtl, TextureProvider textureProvider) {
    Material result = new Material();
    result.id = mtl.id;
    if (mtl.ambient != null)
        result.set(new ColorAttribute(ColorAttribute.Ambient, mtl.ambient));
    if (mtl.diffuse != null)
        result.set(new ColorAttribute(ColorAttribute.Diffuse, mtl.diffuse));
    if (mtl.specular != null)
        result.set(new ColorAttribute(ColorAttribute.Specular, mtl.specular));
    if (mtl.emissive != null)
        result.set(new ColorAttribute(ColorAttribute.Emissive, mtl.emissive));
    if (mtl.reflection != null)
        result.set(new ColorAttribute(ColorAttribute.Reflection, mtl.reflection));
    if (mtl.shininess > 0f)
        result.set(new FloatAttribute(FloatAttribute.Shininess, mtl.shininess));
    if (mtl.opacity != 1.f)
        result.set(new BlendingAttribute(GL20.GL_SRC_ALPHA, GL20.GL_ONE_MINUS_SRC_ALPHA, mtl.opacity));
    ObjectMap<String, Texture> textures = new ObjectMap<String, Texture>();
    // FIXME uvScaling/uvTranslation totally ignored
    if (mtl.textures != null) {
        for (ModelTexture tex : mtl.textures) {
            Texture texture;
            if (textures.containsKey(tex.fileName)) {
                texture = textures.get(tex.fileName);
            } else {
                texture = textureProvider.load(tex.fileName);
                textures.put(tex.fileName, texture);
                disposables.add(texture);
            }
            TextureDescriptor descriptor = new TextureDescriptor(texture);
            descriptor.minFilter = texture.getMinFilter();
            descriptor.magFilter = texture.getMagFilter();
            descriptor.uWrap = texture.getUWrap();
            descriptor.vWrap = texture.getVWrap();
            float offsetU = tex.uvTranslation == null ? 0f : tex.uvTranslation.x;
            float offsetV = tex.uvTranslation == null ? 0f : tex.uvTranslation.y;
            float scaleU = tex.uvScaling == null ? 1f : tex.uvScaling.x;
            float scaleV = tex.uvScaling == null ? 1f : tex.uvScaling.y;
            switch(tex.usage) {
                case ModelTexture.USAGE_DIFFUSE:
                    result.set(new TextureAttribute(TextureAttribute.Diffuse, descriptor, offsetU, offsetV, scaleU, scaleV));
                    break;
                case ModelTexture.USAGE_SPECULAR:
                    result.set(new TextureAttribute(TextureAttribute.Specular, descriptor, offsetU, offsetV, scaleU, scaleV));
                    break;
                case ModelTexture.USAGE_BUMP:
                    result.set(new TextureAttribute(TextureAttribute.Bump, descriptor, offsetU, offsetV, scaleU, scaleV));
                    break;
                case ModelTexture.USAGE_NORMAL:
                    result.set(new TextureAttribute(TextureAttribute.Normal, descriptor, offsetU, offsetV, scaleU, scaleV));
                    break;
                case ModelTexture.USAGE_AMBIENT:
                    result.set(new TextureAttribute(TextureAttribute.Ambient, descriptor, offsetU, offsetV, scaleU, scaleV));
                    break;
                case ModelTexture.USAGE_EMISSIVE:
                    result.set(new TextureAttribute(TextureAttribute.Emissive, descriptor, offsetU, offsetV, scaleU, scaleV));
                    break;
                case ModelTexture.USAGE_REFLECTION:
                    result.set(new TextureAttribute(TextureAttribute.Reflection, descriptor, offsetU, offsetV, scaleU, scaleV));
                    break;
            }
        }
    }
    return result;
}
