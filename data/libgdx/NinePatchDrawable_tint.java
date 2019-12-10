/**
 * Creates a new drawable that renders the same as this drawable tinted the specified color.
 */
public NinePatchDrawable tint(Color tint) {
    NinePatchDrawable drawable = new NinePatchDrawable(this);
    drawable.setPatch(new NinePatch(drawable.getPatch(), tint));
    return drawable;
}
