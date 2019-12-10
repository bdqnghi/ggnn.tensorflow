@Override
public void render() {
    transform.idt();
    if (rotateCheckBox.isChecked())
        transform.rotate(Vector3.Y, rotation = (rotation + rotationSpeed * Gdx.graphics.getRawDeltaTime()) % 360);
    if (moveCheckBox.isChecked()) {
        movement = (movement + moveSpeed * Gdx.graphics.getRawDeltaTime()) % 1f;
        final float sm = MathUtils.sin(movement * MathUtils.PI2);
        final float cm = MathUtils.cos(movement * MathUtils.PI2);
        transform.trn(0, moveRadius * cm, moveRadius * sm);
    }
    super.render();
    stringBuilder.setLength(0);
    getStatus(stringBuilder);
    fpsLabel.setText(stringBuilder);
    hud.act(Gdx.graphics.getDeltaTime());
    hud.draw();
}
