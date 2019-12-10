/**
 * If this method is overridden, the super method or {@link #validate()} should be called to ensure the widget group is laid
 * out.
 */
public void draw(Batch batch, float parentAlpha) {
    validate();
    super.draw(batch, parentAlpha);
}
