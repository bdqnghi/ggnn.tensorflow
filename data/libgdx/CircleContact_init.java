public void init(Fixture fixtureA, Fixture fixtureB) {
    super.init(fixtureA, 0, fixtureB, 0);
    assert (m_fixtureA.getType() == ShapeType.CIRCLE);
    assert (m_fixtureB.getType() == ShapeType.CIRCLE);
}
