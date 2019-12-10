public static String createPrefix(final Renderable renderable, final Config config) {
    final Attributes attributes = combineAttributes(renderable);
    String prefix = "";
    final long attributesMask = attributes.getMask();
    final long vertexMask = renderable.meshPart.mesh.getVertexAttributes().getMask();
    if (and(vertexMask, Usage.Position))
        prefix += "#define positionFlag\n";
    if (or(vertexMask, Usage.ColorUnpacked | Usage.ColorPacked))
        prefix += "#define colorFlag\n";
    if (and(vertexMask, Usage.BiNormal))
        prefix += "#define binormalFlag\n";
    if (and(vertexMask, Usage.Tangent))
        prefix += "#define tangentFlag\n";
    if (and(vertexMask, Usage.Normal))
        prefix += "#define normalFlag\n";
    if (and(vertexMask, Usage.Normal) || and(vertexMask, Usage.Tangent | Usage.BiNormal)) {
        if (renderable.environment != null) {
            prefix += "#define lightingFlag\n";
            prefix += "#define ambientCubemapFlag\n";
            prefix += "#define numDirectionalLights " + config.numDirectionalLights + "\n";
            prefix += "#define numPointLights " + config.numPointLights + "\n";
            prefix += "#define numSpotLights " + config.numSpotLights + "\n";
            if (attributes.has(ColorAttribute.Fog)) {
                prefix += "#define fogFlag\n";
            }
            if (renderable.environment.shadowMap != null)
                prefix += "#define shadowMapFlag\n";
            if (attributes.has(CubemapAttribute.EnvironmentMap))
                prefix += "#define environmentCubemapFlag\n";
        }
    }
    final int n = renderable.meshPart.mesh.getVertexAttributes().size();
    for (int i = 0; i < n; i++) {
        final VertexAttribute attr = renderable.meshPart.mesh.getVertexAttributes().get(i);
        if (attr.usage == Usage.BoneWeight)
            prefix += "#define boneWeight" + attr.unit + "Flag\n";
        else if (attr.usage == Usage.TextureCoordinates)
            prefix += "#define texCoord" + attr.unit + "Flag\n";
    }
    if ((attributesMask & BlendingAttribute.Type) == BlendingAttribute.Type)
        prefix += "#define " + BlendingAttribute.Alias + "Flag\n";
    if ((attributesMask & TextureAttribute.Diffuse) == TextureAttribute.Diffuse) {
        prefix += "#define " + TextureAttribute.DiffuseAlias + "Flag\n";
        // FIXME implement UV mapping
        prefix += "#define " + TextureAttribute.DiffuseAlias + "Coord texCoord0\n";
    }
    if ((attributesMask & TextureAttribute.Specular) == TextureAttribute.Specular) {
        prefix += "#define " + TextureAttribute.SpecularAlias + "Flag\n";
        // FIXME implement UV mapping
        prefix += "#define " + TextureAttribute.SpecularAlias + "Coord texCoord0\n";
    }
    if ((attributesMask & TextureAttribute.Normal) == TextureAttribute.Normal) {
        prefix += "#define " + TextureAttribute.NormalAlias + "Flag\n";
        // FIXME implement UV mapping
        prefix += "#define " + TextureAttribute.NormalAlias + "Coord texCoord0\n";
    }
    if ((attributesMask & TextureAttribute.Emissive) == TextureAttribute.Emissive) {
        prefix += "#define " + TextureAttribute.EmissiveAlias + "Flag\n";
        // FIXME implement UV mapping
        prefix += "#define " + TextureAttribute.EmissiveAlias + "Coord texCoord0\n";
    }
    if ((attributesMask & TextureAttribute.Reflection) == TextureAttribute.Reflection) {
        prefix += "#define " + TextureAttribute.ReflectionAlias + "Flag\n";
        // FIXME implement UV mapping
        prefix += "#define " + TextureAttribute.ReflectionAlias + "Coord texCoord0\n";
    }
    if ((attributesMask & TextureAttribute.Ambient) == TextureAttribute.Ambient) {
        prefix += "#define " + TextureAttribute.AmbientAlias + "Flag\n";
        // FIXME implement UV mapping
        prefix += "#define " + TextureAttribute.AmbientAlias + "Coord texCoord0\n";
    }
    if ((attributesMask & ColorAttribute.Diffuse) == ColorAttribute.Diffuse)
        prefix += "#define " + ColorAttribute.DiffuseAlias + "Flag\n";
    if ((attributesMask & ColorAttribute.Specular) == ColorAttribute.Specular)
        prefix += "#define " + ColorAttribute.SpecularAlias + "Flag\n";
    if ((attributesMask & ColorAttribute.Emissive) == ColorAttribute.Emissive)
        prefix += "#define " + ColorAttribute.EmissiveAlias + "Flag\n";
    if ((attributesMask & ColorAttribute.Reflection) == ColorAttribute.Reflection)
        prefix += "#define " + ColorAttribute.ReflectionAlias + "Flag\n";
    if ((attributesMask & FloatAttribute.Shininess) == FloatAttribute.Shininess)
        prefix += "#define " + FloatAttribute.ShininessAlias + "Flag\n";
    if ((attributesMask & FloatAttribute.AlphaTest) == FloatAttribute.AlphaTest)
        prefix += "#define " + FloatAttribute.AlphaTestAlias + "Flag\n";
    if (renderable.bones != null && config.numBones > 0)
        prefix += "#define numBones " + config.numBones + "\n";
    return prefix;
}
