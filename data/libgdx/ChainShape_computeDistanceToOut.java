@Override
public float computeDistanceToOut(Transform xf, Vec2 p, int childIndex, Vec2 normalOut) {
    final EdgeShape edge = pool0;
    getChildEdge(edge, childIndex);
    return edge.computeDistanceToOut(xf, p, 0, normalOut);
}
