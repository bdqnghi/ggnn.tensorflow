public void init(Fixture fixtureA, Fixture fixtureB) {
    super.init(fixtureA, 0, fixtureB, 0);
    assert (m_fixtureA.getType() == ShapeType.POLYGON);
    assert (m_fixtureB.getType() == ShapeType.POLYGON);
}
