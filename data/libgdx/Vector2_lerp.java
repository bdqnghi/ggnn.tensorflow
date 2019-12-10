@Override
public Vector2 lerp(Vector2 target, float alpha) {
    final float invAlpha = 1.0f - alpha;
    this.x = (x * invAlpha) + (target.x * alpha);
    this.y = (y * invAlpha) + (target.y * alpha);
    return this;
}
