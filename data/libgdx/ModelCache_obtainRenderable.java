private Renderable obtainRenderable(Material material, int primitiveType) {
    Renderable result = renderablesPool.obtain();
    result.bones = null;
    result.environment = null;
    result.material = material;
    result.meshPart.mesh = null;
    result.meshPart.offset = 0;
    result.meshPart.size = 0;
    result.meshPart.primitiveType = primitiveType;
    result.meshPart.center.set(0, 0, 0);
    result.meshPart.halfExtents.set(0, 0, 0);
    result.meshPart.radius = -1f;
    result.shader = null;
    result.userData = null;
    result.worldTransform.idt();
    return result;
}
