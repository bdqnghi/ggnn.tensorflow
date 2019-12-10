public Contact popContact(Fixture fixtureA, int indexA, Fixture fixtureB, int indexB) {
    final ShapeType type1 = fixtureA.getType();
    final ShapeType type2 = fixtureB.getType();
    final ContactRegister reg = contactStacks[type1.ordinal()][type2.ordinal()];
    if (reg != null) {
        if (reg.primary) {
            Contact c = reg.creator.pop();
            c.init(fixtureA, indexA, fixtureB, indexB);
            return c;
        } else {
            Contact c = reg.creator.pop();
            c.init(fixtureB, indexB, fixtureA, indexA);
            return c;
        }
    } else {
        return null;
    }
}
