public void pushContact(Contact contact) {
    Fixture fixtureA = contact.getFixtureA();
    Fixture fixtureB = contact.getFixtureB();
    if (contact.m_manifold.pointCount > 0 && !fixtureA.isSensor() && !fixtureB.isSensor()) {
        fixtureA.getBody().setAwake(true);
        fixtureB.getBody().setAwake(true);
    }
    ShapeType type1 = fixtureA.getType();
    ShapeType type2 = fixtureB.getType();
    IDynamicStack<Contact> creator = contactStacks[type1.ordinal()][type2.ordinal()].creator;
    creator.push(contact);
}
