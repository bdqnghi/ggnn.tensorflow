private void hookEvents() {
    addEventListener(canvas, "mousedown", this, true);
    addEventListener(Document.get(), "mousedown", this, true);
    addEventListener(canvas, "mouseup", this, true);
    addEventListener(Document.get(), "mouseup", this, true);
    addEventListener(canvas, "mousemove", this, true);
    addEventListener(Document.get(), "mousemove", this, true);
    addEventListener(canvas, getMouseWheelEvent(), this, true);
    addEventListener(Document.get(), "keydown", this, false);
    addEventListener(Document.get(), "keyup", this, false);
    addEventListener(Document.get(), "keypress", this, false);
    addEventListener(canvas, "touchstart", this, true);
    addEventListener(canvas, "touchmove", this, true);
    addEventListener(canvas, "touchcancel", this, true);
    addEventListener(canvas, "touchend", this, true);
}
