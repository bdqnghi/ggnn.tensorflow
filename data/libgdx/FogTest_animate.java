private void animate() {
    delta = Gdx.graphics.getDeltaTime();
    instance.transform.val[14] += delta * 4 * dir;
    if (Math.abs(instance.transform.val[14]) > 5) {
        dir *= -1;
    }
}
