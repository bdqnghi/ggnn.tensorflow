@Method(selector = "touchesCancelled:withEvent:")
public void touchesCancelled(@Pointer long touches, UIEvent event) {
    IOSGraphics.this.input.touchUp(touches, event);
}
