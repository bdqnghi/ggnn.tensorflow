@Method(selector = "touchesBegan:withEvent:")
public void touchesBegan(@Pointer long touches, UIEvent event) {
    IOSGraphics.this.input.touchDown(touches, event);
}
