/**
 * Returns a tinted copy of a drawable found in the skin via {@link #getDrawable(String)}.
 */
public Drawable newDrawable(Drawable drawable, Color tint) {
    Drawable newDrawable;
    if (drawable instanceof TextureRegionDrawable)
        newDrawable = ((TextureRegionDrawable) drawable).tint(tint);
    else if (drawable instanceof NinePatchDrawable)
        newDrawable = ((NinePatchDrawable) drawable).tint(tint);
    else if (drawable instanceof SpriteDrawable)
        newDrawable = ((SpriteDrawable) drawable).tint(tint);
    else
        throw new GdxRuntimeException("Unable to copy, unknown drawable type: " + drawable.getClass());
    if (newDrawable instanceof BaseDrawable) {
        BaseDrawable named = (BaseDrawable) newDrawable;
        if (drawable instanceof BaseDrawable)
            named.setName(((BaseDrawable) drawable).getName() + " (" + tint + ")");
        else
            named.setName(" (" + tint + ")");
    }
    return newDrawable;
}
