@Override
public void evaluate(Manifold manifold, Transform xfA, Transform xfB) {
    ChainShape chain = (ChainShape) m_fixtureA.getShape();
    chain.getChildEdge(edge, m_indexA);
    pool.getCollision().collideEdgeAndCircle(manifold, edge, xfA, (CircleShape) m_fixtureB.getShape(), xfB);
}
