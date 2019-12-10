/**
 * Clips the specified screen aligned rectangle, specified relative to the transform matrix of the stage's Batch. The
 * transform matrix and the stage's camera must not have rotational components. Calling this method must be followed by a call
 * to {@link #clipEnd()} if true is returned.
 * @return false if the clipping area is zero and no drawing should occur.
 * @see ScissorStack
 */
public boolean clipBegin(float x, float y, float width, float height) {
    if (width <= 0 || height <= 0)
        return false;
    Rectangle tableBounds = Rectangle.tmp;
    tableBounds.x = x;
    tableBounds.y = y;
    tableBounds.width = width;
    tableBounds.height = height;
    Stage stage = this.stage;
    Rectangle scissorBounds = Pools.obtain(Rectangle.class);
    stage.calculateScissors(tableBounds, scissorBounds);
    if (ScissorStack.pushScissors(scissorBounds))
        return true;
    Pools.free(scissorBounds);
    return false;
}
