@Override
public void render() {
    angle = angle + Gdx.graphics.getDeltaTime() * 360f / 5f;
    kinematicBox3.transform.idt().rotate(Vector3.Y, 360f - 2f * angle).translate(position3);
    if (angle >= 360f) {
        angle = 0;
        kinematicBox = (kinematicBox == kinematicBox1) ? kinematicBox2 : kinematicBox1;
        position = (position == position1) ? position2 : position1;
    }
    kinematicBox.transform.idt().rotate(Vector3.Y, angle).translate(position);
    // This makes bullet call btMotionState#getWorldTransform once:
    kinematicBox.body.setActivationState(Collision.ACTIVE_TAG);
    super.render();
}
