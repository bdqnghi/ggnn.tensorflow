@Override
public void begin(Camera camera, RenderContext context) {
    program.begin();
    context.setDepthTest(GL20.GL_LEQUAL, 0f, 1f);
    context.setDepthMask(true);
    set(u_projTrans, camera.combined);
}
