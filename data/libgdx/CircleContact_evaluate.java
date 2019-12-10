@Override
public void evaluate(Manifold manifold, Transform xfA, Transform xfB) {
    pool.getCollision().collideCircles(manifold, (CircleShape) m_fixtureA.getShape(), xfA, (CircleShape) m_fixtureB.getShape(), xfB);
}
