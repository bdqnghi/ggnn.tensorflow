@Override
public void evaluate(Manifold manifold, Transform xfA, Transform xfB) {
    pool.getCollision().collideEdgeAndPolygon(manifold, (EdgeShape) m_fixtureA.getShape(), xfA, (PolygonShape) m_fixtureB.getShape(), xfB);
}
