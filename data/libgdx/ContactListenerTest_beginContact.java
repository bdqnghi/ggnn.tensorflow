@Override
public void beginContact(Contact contact) {
    System.out.println(String.format("beginContact() addr=%d", getContactAddr(contact)));
    System.out.println(String.format("beginContact() addrA=%d, addrB=%d", getFixtureAddrA(contact), getFixtureAddrB(contact)));
    System.out.println(String.format("beginContact() fixA=%s, fixB=%s", contact.getFixtureA(), contact.getFixtureB()));
    final Body toRemove = contact.getFixtureA().getBody().getType() == BodyType.DynamicBody ? contact.getFixtureA().getBody() : contact.getFixtureB().getBody();
    Gdx.app.postRunnable(new Runnable() {

        @Override
        public void run() {
            world.destroyBody(toRemove);
        }
    });
}
