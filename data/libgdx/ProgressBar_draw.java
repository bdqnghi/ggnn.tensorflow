@Override
public void draw(Batch batch, float parentAlpha) {
    ProgressBarStyle style = this.style;
    boolean disabled = this.disabled;
    final Drawable knob = getKnobDrawable();
    final Drawable bg = (disabled && style.disabledBackground != null) ? style.disabledBackground : style.background;
    final Drawable knobBefore = (disabled && style.disabledKnobBefore != null) ? style.disabledKnobBefore : style.knobBefore;
    final Drawable knobAfter = (disabled && style.disabledKnobAfter != null) ? style.disabledKnobAfter : style.knobAfter;
    Color color = getColor();
    float x = getX();
    float y = getY();
    float width = getWidth();
    float height = getHeight();
    float knobHeight = knob == null ? 0 : knob.getMinHeight();
    float knobWidth = knob == null ? 0 : knob.getMinWidth();
    float percent = getVisualPercent();
    batch.setColor(color.r, color.g, color.b, color.a * parentAlpha);
    if (vertical) {
        float positionHeight = height;
        float bgTopHeight = 0;
        if (bg != null) {
            bg.draw(batch, x + (int) ((width - bg.getMinWidth()) * 0.5f), y, bg.getMinWidth(), height);
            bgTopHeight = bg.getTopHeight();
            positionHeight -= bgTopHeight + bg.getBottomHeight();
        }
        float knobHeightHalf = 0;
        if (min != max) {
            if (knob == null) {
                knobHeightHalf = knobBefore == null ? 0 : knobBefore.getMinHeight() * 0.5f;
                position = (positionHeight - knobHeightHalf) * percent;
                position = Math.min(positionHeight - knobHeightHalf, position);
            } else {
                knobHeightHalf = knobHeight * 0.5f;
                position = (positionHeight - knobHeight) * percent;
                position = Math.min(positionHeight - knobHeight, position) + bg.getBottomHeight();
            }
            position = Math.max(0, position);
        }
        if (knobBefore != null) {
            float offset = 0;
            if (bg != null)
                offset = bgTopHeight;
            knobBefore.draw(batch, x + (int) ((width - knobBefore.getMinWidth()) * 0.5f), y + offset, knobBefore.getMinWidth(), (int) (position + knobHeightHalf));
        }
        if (knobAfter != null) {
            knobAfter.draw(batch, x + (int) ((width - knobAfter.getMinWidth()) * 0.5f), y + (int) (position + knobHeightHalf), knobAfter.getMinWidth(), height - (int) (position + knobHeightHalf));
        }
        if (knob != null)
            knob.draw(batch, x + (int) ((width - knobWidth) * 0.5f), (int) (y + position), knobWidth, knobHeight);
    } else {
        float positionWidth = width;
        float bgLeftWidth = 0;
        if (bg != null) {
            bg.draw(batch, x, y + (int) ((height - bg.getMinHeight()) * 0.5f), width, bg.getMinHeight());
            bgLeftWidth = bg.getLeftWidth();
            positionWidth -= bgLeftWidth + bg.getRightWidth();
        }
        float knobWidthHalf = 0;
        if (min != max) {
            if (knob == null) {
                knobWidthHalf = knobBefore == null ? 0 : knobBefore.getMinWidth() * 0.5f;
                position = (positionWidth - knobWidthHalf) * percent;
                position = Math.min(positionWidth - knobWidthHalf, position);
            } else {
                knobWidthHalf = knobWidth * 0.5f;
                position = (positionWidth - knobWidth) * percent;
                position = Math.min(positionWidth - knobWidth, position) + bgLeftWidth;
            }
            position = Math.max(0, position);
        }
        if (knobBefore != null) {
            float offset = 0;
            if (bg != null)
                offset = bgLeftWidth;
            knobBefore.draw(batch, x + offset, y + (int) ((height - knobBefore.getMinHeight()) * 0.5f), (int) (position + knobWidthHalf), knobBefore.getMinHeight());
        }
        if (knobAfter != null) {
            knobAfter.draw(batch, x + (int) (position + knobWidthHalf), y + (int) ((height - knobAfter.getMinHeight()) * 0.5f), width - (int) (position + knobWidthHalf), knobAfter.getMinHeight());
        }
        if (knob != null)
            knob.draw(batch, (int) (x + position), (int) (y + (height - knobHeight) * 0.5f), knobWidth, knobHeight);
    }
}
