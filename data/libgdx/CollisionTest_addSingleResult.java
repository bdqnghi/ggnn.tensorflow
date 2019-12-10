@Override
public float addSingleResult(btManifoldPoint cp, btCollisionObjectWrapper colObj0Wrap, int partId0, int index0, btCollisionObjectWrapper colObj1Wrap, int partId1, int index1) {
    btCollisionObject other = colObj0Wrap.getCollisionObject() == projectile.body ? colObj1Wrap.getCollisionObject() : colObj0Wrap.getCollisionObject();
    if (other != null && other.userData != null && other.userData instanceof BulletEntity) {
        BulletEntity ent = (BulletEntity) other.userData;
        if (ent != ground && !hits.contains(ent, true))
            hits.add((BulletEntity) other.userData);
    }
    return 0f;
}
