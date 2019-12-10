@Override
public void render() {
    movingBox.transform.val[Matrix4.M03] = movingBox.transform.val[Matrix4.M13] = movingBox.transform.val[Matrix4.M23] = 0f;
    movingBox.transform.rotate(Vector3.Y, Gdx.graphics.getDeltaTime() * 45f);
    movingBox.transform.translate(-5f, 1f, 0f);
    movingBox.body.setWorldTransform(movingBox.transform);
    super.render();
}
