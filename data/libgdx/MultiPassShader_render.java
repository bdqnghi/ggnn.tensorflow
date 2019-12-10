@Override
public void render(Renderable renderable) {
    set(u_pass, 0f);
    super.render(renderable);
    context.setDepthTest(GL20.GL_LESS);
    if (has(u_pass)) {
        context.setBlending(true, GL20.GL_SRC_ALPHA, GL20.GL_ONE_MINUS_SRC_ALPHA);
        for (int i = 1; i < passes; ++i) {
            set(u_pass, (float) i / (float) passes);
            renderable.meshPart.render(program, false);
        }
    }
}
