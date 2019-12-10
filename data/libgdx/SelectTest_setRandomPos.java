public void setRandomPos() {
    float max = 100;
    this.pos.x = -max + MathUtils.random(max * 2);
    this.pos.y = -max + MathUtils.random(max * 2);
    float xShift = 100;
    if (player.contains(this, true)) {
        this.pos.x -= xShift;
    } else if (enemy.contains(this, true)) {
        this.pos.x += xShift;
    } else {
        throw new RuntimeException("unhandled");
    }
}
