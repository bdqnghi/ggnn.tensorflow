@Override
public float addSingleResult(btManifoldPoint cp, btCollisionObjectWrapper colObj0Wrap, int partId0, int index0, btCollisionObjectWrapper colObj1Wrap, int partId1, int index1) {
    cp.getPositionWorldOnA(vectors[0]);
    cp.getPositionWorldOnB(vectors[1]);
    return 1.f;
}
