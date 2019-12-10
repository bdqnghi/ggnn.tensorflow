@Override
public boolean canRender(Renderable renderable) {
    boolean ok = super.canRender(renderable);
    boolean dir = (shadowSystem.getCurrentLight() instanceof DirectionalLight);
    if (lightType == -1) {
        lightType = LIGHT_SPOT;
        if (dir)
            lightType = LIGHT_DIR;
    }
    if (dir && lightType != LIGHT_DIR)
        ok = false;
    if (!dir && lightType != LIGHT_SPOT)
        ok = false;
    return ok;
}
