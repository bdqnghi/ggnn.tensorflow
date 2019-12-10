@Method(selector = "touchesEnded:withEvent:")
public void touchesEnded(@Pointer long touches, UIEvent event) {
    IOSGraphics.this.input.touchUp(touches, event);
}
