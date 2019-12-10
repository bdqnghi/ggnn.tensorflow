protected void getRenderables(Node node, Array<Renderable> renderables, Pool<Renderable> pool) {
    if (node.parts.size > 0) {
        for (NodePart nodePart : node.parts) {
            if (nodePart.enabled)
                renderables.add(getRenderable(pool.obtain(), node, nodePart));
        }
    }
    for (Node child : node.getChildren()) {
        getRenderables(child, renderables, pool);
    }
}
