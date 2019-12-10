protected void bindMaterial(final Attributes attributes) {
    int cullFace = config.defaultCullFace == -1 ? defaultCullFace : config.defaultCullFace;
    int depthFunc = config.defaultDepthFunc == -1 ? defaultDepthFunc : config.defaultDepthFunc;
    float depthRangeNear = 0f;
    float depthRangeFar = 1f;
    boolean depthMask = true;
    for (final Attribute attr : attributes) {
        final long t = attr.type;
        if (BlendingAttribute.is(t)) {
            context.setBlending(true, ((BlendingAttribute) attr).sourceFunction, ((BlendingAttribute) attr).destFunction);
            set(u_opacity, ((BlendingAttribute) attr).opacity);
        } else if ((t & IntAttribute.CullFace) == IntAttribute.CullFace)
            cullFace = ((IntAttribute) attr).value;
        else if ((t & FloatAttribute.AlphaTest) == FloatAttribute.AlphaTest)
            set(u_alphaTest, ((FloatAttribute) attr).value);
        else if ((t & DepthTestAttribute.Type) == DepthTestAttribute.Type) {
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
