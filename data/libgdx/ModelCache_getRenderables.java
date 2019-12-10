@Override
public void getRenderables(Array<Renderable> renderables, Pool<Renderable> pool) {
    if (building)
        throw new GdxRuntimeException("Cannot render a ModelCache in between .begin() and .end()");
    for (Renderable r : this.renderables) {
        r.shader = null;
        r.environment = null;
    }
    renderables.addAll(this.renderables);
}
