@Override
public void endContact(Contact contact) {
    System.out.println(String.format("  endContact() addr=%d", getContactAddr(contact)));
    System.out.println(String.format("  endContact() addrA=%d, addrB=%d", getFixtureAddrA(contact), getFixtureAddrB(contact)));
    System.out.println(String.format("  endContact() fixA=%s, fixB=%s", contact.getFixtureA(), contact.getFixtureB()));
    final Fixture fixtureA = contact.getFixtureA();
    final Fixture fixtureB = contact.getFixtureB();
    if (fixtureA == null || fixtureB == null) {
        throw new RuntimeException("No fixture found.");
    }
}
