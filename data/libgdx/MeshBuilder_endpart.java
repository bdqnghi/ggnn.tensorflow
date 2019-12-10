private void endpart() {
    if (part != null) {
        bounds.getCenter(part.center);
        bounds.getDimensions(part.halfExtents).scl(0.5f);
        part.radius = part.halfExtents.len();
        bounds.inf();
        part.offset = istart;
        part.size = indices.size - istart;
        istart = indices.size;
        part = null;
    }
}
