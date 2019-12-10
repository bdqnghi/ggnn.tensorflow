@Override
public void getRenderables(Array<Renderable> renderables, Pool<Renderable> pool) {
    for (Renderable renderable : this.renderables) renderables.add(pool.obtain().set(renderable));
}
