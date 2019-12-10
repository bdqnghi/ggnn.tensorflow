@Method(selector = "touchesMoved:withEvent:")
public void touchesMoved(@Pointer long touches, UIEvent event) {
    IOSGraphics.this.input.touchMoved(touches, event);
}
