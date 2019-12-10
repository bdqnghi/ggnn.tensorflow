@Override
public void dispose() {
    for (btCollisionShape child : children) child.release();
    children.clear();
    super.dispose();
}
