@Override
public void dispose() {
    if (building)
        throw new GdxRuntimeException("Cannot dispose a ModelCache in between .begin() and .end()");
    meshPool.dispose();
}
