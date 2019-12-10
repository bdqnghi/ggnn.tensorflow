@Override
protected void renderWorld() {
    hit = false;
    other = null;
    world.collisionWorld.contactTest(movingBox.body, contactCB);
    movingBox.setColor(hit ? Color.RED : normalColor);
    BulletEntity e = null;
    if (other != null && other.userData != null && other.userData instanceof BulletEntity) {
        e = (BulletEntity) (other.userData);
        tmpColor.set(e.getColor());
        e.setColor(Color.RED);
    }
    super.renderWorld();
    if (e != null)
        e.setColor(tmpColor);
}
