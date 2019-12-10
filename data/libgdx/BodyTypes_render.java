@Override
public void render() {
    if (m_platform.getType() == BodyType.KinematicBody) {
        Vector2 p = m_platform.getTransform().getPosition();
        Vector2 v = m_platform.getLinearVelocity();
        if ((p.x < -10 && v.x < 0) || (p.x > 10 && v.x > 0)) {
            v.x = -v.x;
            m_platform.setLinearVelocity(v);
        }
    }
    super.render();
// if (renderer.batch != null) {
// renderer.batch.begin();
// // renderer.batch.drawText(renderer.font, "Keys: (d) dynamic, (s) static, (k) kinematic", 0, Gdx.app.getGraphics()
// // .getHeight(), Color.WHITE);
// renderer.batch.end();
// }
}
