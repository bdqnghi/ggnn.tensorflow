/**
 * Copy given color. The color will be blended with the batch color, then combined with the texture colors at
 * {@link NinePatch#draw(Batch, float, float, float, float) draw} time. Default is {@link Color#WHITE}.
 */
public void setColor(Color color) {
    this.color.set(color);
}
