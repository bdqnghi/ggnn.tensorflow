@Override
public void render(Renderable renderable, Attributes combinedAttributes) {
    if (combinedAttributes.has(BlendingAttribute.Type)) {
        final BlendingAttribute blending = (BlendingAttribute) combinedAttributes.get(BlendingAttribute.Type);
        combinedAttributes.remove(BlendingAttribute.Type);
        final boolean hasAlphaTest = combinedAttributes.has(FloatAttribute.AlphaTest);
        if (!hasAlphaTest)
            combinedAttributes.set(alphaTestAttribute);
        if (blending.opacity >= ((FloatAttribute) combinedAttributes.get(FloatAttribute.AlphaTest)).value)
            super.render(renderable, combinedAttributes);
        if (!hasAlphaTest)
            combinedAttributes.remove(FloatAttribute.AlphaTest);
        combinedAttributes.set(blending);
    } else
        super.render(renderable, combinedAttributes);
}
