@Override
public void dispose() {
    // Don't rely on the GC
    if (bodyInfo != null)
        bodyInfo.dispose();
    if (shape != null)
        shape.dispose();
    // Remove references so the GC can do it's work
    bodyInfo = null;
    shape = null;
}
