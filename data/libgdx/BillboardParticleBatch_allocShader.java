private void allocShader() {
    Renderable newRenderable = allocRenderable();
    shader = newRenderable.shader = getShader(newRenderable);
    renderablePool.free(newRenderable);
}
