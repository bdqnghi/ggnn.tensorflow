@Override
public void getRenderables(Array<Renderable> renderables, Pool<Renderable> pool) {
    if (bufferedParticlesCount > 0)
        renderables.add(pool.obtain().set(renderable));
}
