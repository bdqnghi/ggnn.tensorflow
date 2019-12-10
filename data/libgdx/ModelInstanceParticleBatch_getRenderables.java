@Override
public void getRenderables(Array<Renderable> renderables, Pool<Renderable> pool) {
    for (ModelInstanceControllerRenderData data : controllersRenderData) {
        for (int i = 0, count = data.controller.particles.size; i < count; ++i) {
            data.modelInstanceChannel.data[i].getRenderables(renderables, pool);
        }
    }
}
