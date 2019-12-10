/**
 * @return True if this collection has the specified attribute, i.e. attributes.has(ColorAttribute.Diffuse); Or when multiple
 *         attribute types are specified, true if this collection has all specified attributes, i.e. attributes.has(out,
 *         ColorAttribute.Diffuse | ColorAttribute.Specular | TextureAttribute.Diffuse);
 */
public final boolean has(final long type) {
    return type != 0 && (this.mask & type) == type;
}
