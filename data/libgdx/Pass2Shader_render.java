@Override
public void render(Renderable renderable, Attributes combinedAttributes) {
    if (shadowSystem.isFirstCallPass2())
        combinedAttributes.remove(BlendingAttribute.Type);
    else
        combinedAttributes.set(blend);
    combinedAttributes.set(depth);
    super.render(renderable, combinedAttributes);
}
