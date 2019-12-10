private int parseTextureUsage(final String value) {
    if (value.equalsIgnoreCase("AMBIENT"))
        return ModelTexture.USAGE_AMBIENT;
    else if (value.equalsIgnoreCase("BUMP"))
        return ModelTexture.USAGE_BUMP;
    else if (value.equalsIgnoreCase("DIFFUSE"))
        return ModelTexture.USAGE_DIFFUSE;
    else if (value.equalsIgnoreCase("EMISSIVE"))
        return ModelTexture.USAGE_EMISSIVE;
    else if (value.equalsIgnoreCase("NONE"))
        return ModelTexture.USAGE_NONE;
    else if (value.equalsIgnoreCase("NORMAL"))
        return ModelTexture.USAGE_NORMAL;
    else if (value.equalsIgnoreCase("REFLECTION"))
        return ModelTexture.USAGE_REFLECTION;
    else if (value.equalsIgnoreCase("SHININESS"))
        return ModelTexture.USAGE_SHININESS;
    else if (value.equalsIgnoreCase("SPECULAR"))
        return ModelTexture.USAGE_SPECULAR;
    else if (value.equalsIgnoreCase("TRANSPARENCY"))
        return ModelTexture.USAGE_TRANSPARENCY;
    return ModelTexture.USAGE_UNKNOWN;
}
