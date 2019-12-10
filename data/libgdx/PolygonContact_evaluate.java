@Override
public void evaluate(Manifold manifold, Transform xfA, Transform xfB) {
    pool.getCollision().collidePolygons(manifold, (PolygonShape) m_fixtureA.getShape(), xfA, (PolygonShape) m_fixtureB.getShape(), xfB);
}
