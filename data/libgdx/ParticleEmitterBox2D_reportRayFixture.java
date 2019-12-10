public float reportRayFixture(Fixture fixture, Vector2 point, Vector2 normal, float fraction) {
    ParticleEmitterBox2D.this.particleCollided = true;
    ParticleEmitterBox2D.this.normalAngle = MathUtils.atan2(normal.y, normal.x) * MathUtils.radiansToDegrees;
    return fraction;
}
