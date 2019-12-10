@Override
public <T extends RenderableProvider> void analyze(BaseLight light, Camera camera, Iterable<T> renderableProviders) {
    getRenderables(renderableProviders);
    prepareCamera(camera);
    bb1.inf();
    for (Renderable renderable : renderables) {
        renderable.worldTransform.getTranslation(tmpV);
        tmpV.add(renderable.meshPart.center);
        if (camera.frustum.sphereInFrustum(tmpV, renderable.meshPart.radius)) {
            bb1.ext(tmpV, renderable.meshPart.radius);
        }
    }
    computeResult(bb1, camera);
    renderablesPool.flush();
    renderables.clear();
}
