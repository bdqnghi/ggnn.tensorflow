/**
 * If true, when drawing a shape cannot be performed with the current shape type, the batch is flushed and the shape type is
 * changed automatically. This can increase the number of batch flushes if care is not taken to draw the same type of shapes
 * together. Default is false.
 */
public void setAutoShapeType(boolean autoShapeType) {
    this.autoShapeType = autoShapeType;
}
