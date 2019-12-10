@Override
public boolean act(float delta) {
    emitter.getTransform(tmpMatrix);
    tmpQuaternion.set(axis, angle * delta).toMatrix(tmpMatrix4.val);
    tmpMatrix4.mul(tmpMatrix);
    emitter.setTransform(tmpMatrix4);
    return false;
}
