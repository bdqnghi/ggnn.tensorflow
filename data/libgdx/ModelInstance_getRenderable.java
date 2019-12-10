public Renderable getRenderable(final Renderable out, final Node node, final NodePart nodePart) {
    nodePart.setRenderable(out);
    if (nodePart.bones == null && transform != null)
        out.worldTransform.set(transform).mul(node.globalTransform);
    else if (transform != null)
        out.worldTransform.set(transform);
    else
        out.worldTransform.idt();
    out.userData = userData;
    return out;
}
