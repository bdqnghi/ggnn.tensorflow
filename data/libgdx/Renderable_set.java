public Renderable set(Renderable renderable) {
    worldTransform.set(renderable.worldTransform);
    material = renderable.material;
    meshPart.set(renderable.meshPart);
    bones = renderable.bones;
    environment = renderable.environment;
    shader = renderable.shader;
    userData = renderable.userData;
    return this;
}
