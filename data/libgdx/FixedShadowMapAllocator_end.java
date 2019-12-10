@Override
public void end() {
    if (!allocating) {
        throw new GdxRuntimeException("Allocator must begin before end");
    }
    allocating = false;
}
