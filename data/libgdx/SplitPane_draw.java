@Override
public void draw(Batch batch, float parentAlpha) {
    validate();
    Color color = getColor();
    Drawable handle = style.handle;
    applyTransform(batch, computeTransform());
    Matrix4 transform = batch.getTransformMatrix();
    if (firstWidget != null) {
        batch.flush();
        getStage().calculateScissors(firstWidgetBounds, firstScissors);
        if (ScissorStack.pushScissors(firstScissors)) {
            if (firstWidget.isVisible())
                firstWidget.draw(batch, parentAlpha * color.a);
            batch.flush();
            ScissorStack.popScissors();
        }
    }
    if (secondWidget != null) {
        batch.flush();
        getStage().calculateScissors(secondWidgetBounds, secondScissors);
        if (ScissorStack.pushScissors(secondScissors)) {
            if (secondWidget.isVisible())
                secondWidget.draw(batch, parentAlpha * color.a);
            batch.flush();
            ScissorStack.popScissors();
        }
    }
    batch.setColor(color.r, color.g, color.b, parentAlpha * color.a);
    handle.draw(batch, handleBounds.x, handleBounds.y, handleBounds.width, handleBounds.height);
    resetTransform(batch);
}
