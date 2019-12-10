@Override
public void draw(Batch batch, float parentAlpha) {
    if (widget == null)
        return;
    validate();
    // Setup transform for this group.
    applyTransform(batch, computeTransform());
    if (scrollX)
        hKnobBounds.x = hScrollBounds.x + (int) ((hScrollBounds.width - hKnobBounds.width) * getVisualScrollPercentX());
    if (scrollY)
        vKnobBounds.y = vScrollBounds.y + (int) ((vScrollBounds.height - vKnobBounds.height) * (1 - getVisualScrollPercentY()));
    // Calculate the widget's position depending on the scroll state and available widget area.
    float y = widgetAreaBounds.y;
    if (!scrollY)
        y -= (int) maxY;
    else
        y -= (int) (maxY - visualAmountY);
    float x = widgetAreaBounds.x;
    if (scrollX)
        x -= (int) visualAmountX;
    if (!fadeScrollBars && scrollbarsOnTop) {
        if (scrollX && hScrollOnBottom) {
            float scrollbarHeight = 0;
            if (style.hScrollKnob != null)
                scrollbarHeight = style.hScrollKnob.getMinHeight();
            if (style.hScroll != null)
                scrollbarHeight = Math.max(scrollbarHeight, style.hScroll.getMinHeight());
            y += scrollbarHeight;
        }
        if (scrollY && !vScrollOnRight) {
            float scrollbarWidth = 0;
            if (style.hScrollKnob != null)
                scrollbarWidth = style.hScrollKnob.getMinWidth();
            if (style.hScroll != null)
                scrollbarWidth = Math.max(scrollbarWidth, style.hScroll.getMinWidth());
            x += scrollbarWidth;
        }
    }
    widget.setPosition(x, y);
    if (widget instanceof Cullable) {
        widgetCullingArea.x = -widget.getX() + widgetAreaBounds.x;
        widgetCullingArea.y = -widget.getY() + widgetAreaBounds.y;
        widgetCullingArea.width = widgetAreaBounds.width;
        widgetCullingArea.height = widgetAreaBounds.height;
        ((Cullable) widget).setCullingArea(widgetCullingArea);
    }
    // Draw the background ninepatch.
    Color color = getColor();
    batch.setColor(color.r, color.g, color.b, color.a * parentAlpha);
    if (style.background != null)
        style.background.draw(batch, 0, 0, getWidth(), getHeight());
    // Caculate the scissor bounds based on the batch transform, the available widget area and the camera transform. We need to
    // project those to screen coordinates for OpenGL ES to consume.
    getStage().calculateScissors(widgetAreaBounds, scissorBounds);
    // Enable scissors for widget area and draw the widget.
    batch.flush();
    if (ScissorStack.pushScissors(scissorBounds)) {
        drawChildren(batch, parentAlpha);
        batch.flush();
        ScissorStack.popScissors();
    }
    // Render scrollbars and knobs on top.
    batch.setColor(color.r, color.g, color.b, color.a * parentAlpha * Interpolation.fade.apply(fadeAlpha / fadeAlphaSeconds));
    if (scrollX && scrollY) {
        if (style.corner != null) {
            style.corner.draw(batch, hScrollBounds.x + hScrollBounds.width, hScrollBounds.y, vScrollBounds.width, vScrollBounds.y);
        }
    }
    if (scrollX) {
        if (style.hScroll != null)
            style.hScroll.draw(batch, hScrollBounds.x, hScrollBounds.y, hScrollBounds.width, hScrollBounds.height);
        if (style.hScrollKnob != null)
            style.hScrollKnob.draw(batch, hKnobBounds.x, hKnobBounds.y, hKnobBounds.width, hKnobBounds.height);
    }
    if (scrollY) {
        if (style.vScroll != null)
            style.vScroll.draw(batch, vScrollBounds.x, vScrollBounds.y, vScrollBounds.width, vScrollBounds.height);
        if (style.vScrollKnob != null)
            style.vScrollKnob.draw(batch, vKnobBounds.x, vKnobBounds.y, vKnobBounds.width, vKnobBounds.height);
    }
    resetTransform(batch);
}
