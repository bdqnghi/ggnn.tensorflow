public BulletEntity shoot(final String what, final float x, final float y, final float impulse) {
    // Shoot a box
    Ray ray = camera.getPickRay(x, y);
    BulletEntity entity = world.add(what, ray.origin.x, ray.origin.y, ray.origin.z);
    entity.setColor(0.5f + 0.5f * (float) Math.random(), 0.5f + 0.5f * (float) Math.random(), 0.5f + 0.5f * (float) Math.random(), 1f);
    ((btRigidBody) entity.body).applyCentralImpulse(ray.direction.scl(impulse));
    return entity;
}
