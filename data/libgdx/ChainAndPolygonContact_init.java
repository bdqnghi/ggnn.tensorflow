@Override
public void init(Fixture fA, int indexA, Fixture fB, int indexB) {
    super.init(fA, indexA, fB, indexB);
    assert (m_fixtureA.getType() == ShapeType.CHAIN);
    assert (m_fixtureB.getType() == ShapeType.POLYGON);
}
