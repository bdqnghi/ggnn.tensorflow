@Override
public float addSingleResult(btManifoldPoint cp, btCollisionObjectWrapper colObj0Wrap, int partId0, int index0, btCollisionObjectWrapper colObj1Wrap, int partId1, int index1) {
    hit = true;
    other = colObj0Wrap.getCollisionObject() == movingBox.body ? colObj1Wrap.getCollisionObject() : colObj0Wrap.getCollisionObject();
    return 0f;
}
