@Override
public BulletEntity construct(final Matrix4 transform) {
    if (bodyInfo == null && shape != null) {
        btCollisionObject obj = new btCollisionObject();
        obj.setCollisionShape(shape);
        return new BulletEntity(model, obj, transform);
    } else
        return new BulletEntity(model, bodyInfo, transform);
}
