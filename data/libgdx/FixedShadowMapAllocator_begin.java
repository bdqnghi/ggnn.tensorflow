@Override
public void begin() {
    if (allocating) {
        throw new GdxRuntimeException("Allocator must end before begin");
    }
    allocating = true;
    currentMap = 0;
}
