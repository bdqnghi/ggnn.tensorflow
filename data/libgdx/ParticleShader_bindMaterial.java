protected void bindMaterial(final Renderable renderable) {
    if (currentMaterial == renderable.material)
        return;
    int cullFace = config.defaultCullFace == -1 ? GL20.GL_BACK : config.defaultCullFace;
    int depthFunc = config.defaultDepthFunc == -1 ? GL20.GL_LEQUAL : config.defaultDepthFunc;
    float depthRangeNear = 0f;
    float depthRangeFar = 1f;
    boolean depthMask = true;
    currentMaterial = renderable.material;
    for (final Attribute attr : currentMaterial) {
        final long t = attr.type;
        if (BlendingAttribute.is(t)) {
            context.setBlending(true, ((BlendingAttribute) attr).sourceFunction, ((BlendingAttribute) attr).destFunction);
        } else if ((t & DepthTestAttribute.Type) == DepthTestAttribute.Type) {
            DepthTestAttribute dta = (DepthTestAttribute) attr;
            depthFunc = dta.depthFunc;
            depthRangeNear = dta.depthRangeNear;
            depthRangeFar = dta.depthRangeFar;
            depthMask = dta.depthMask;
        } else if (!config.ignoreUnimplemented)
            throw new GdxRuntimeException("Unknown material attribute: " + attr.toString());
    }
    context.setCullFace(cullFace);
    context.setDepthTest(depthFunc, depthRangeNear, depthRangeFar);
    context.setDepthMask(depthMask);
}
