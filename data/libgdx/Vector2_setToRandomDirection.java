@Override
public Vector2 setToRandomDirection() {
    float theta = MathUtils.random(0f, MathUtils.PI2);
    return this.set(MathUtils.cos(theta), MathUtils.sin(theta));
}
