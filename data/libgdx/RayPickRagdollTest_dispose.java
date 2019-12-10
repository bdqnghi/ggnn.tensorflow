@Override
public void dispose() {
    for (int i = 0; i < constraints.size; i++) {
        ((btDynamicsWorld) world.collisionWorld).removeConstraint(constraints.get(i));
        constraints.get(i).dispose();
    }
    constraints.clear();
    super.dispose();
}
