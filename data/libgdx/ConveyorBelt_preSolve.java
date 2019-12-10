public void preSolve(Contact contact, Manifold oldManifold) {
    Fixture fixtureA = contact.getFixtureA();
    Fixture fixtureB = contact.getFixtureB();
    if (fixtureA == m_platform || fixtureB == m_platform) {
        contact.setTangentSpeed(5.0f);
    }
}
