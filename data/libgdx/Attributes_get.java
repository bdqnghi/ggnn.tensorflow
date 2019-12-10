/**
 * Get multiple attributes at once. Example: material.get(out, ColorAttribute.Diffuse | ColorAttribute.Specular |
 * TextureAttribute.Diffuse);
 */
public final Array<Attribute> get(final Array<Attribute> out, final long type) {
    for (int i = 0; i < attributes.size; i++) if ((attributes.get(i).type & type) != 0)
        out.add(attributes.get(i));
    return out;
}
