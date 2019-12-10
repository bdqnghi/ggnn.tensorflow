private boolean isPlayerGrounded(float deltaTime) {
    groundedPlatform = null;
    Array<Contact> contactList = world.getContactList();
    for (int i = 0; i < contactList.size; i++) {
        Contact contact = contactList.get(i);
        if (contact.isTouching() && (contact.getFixtureA() == playerSensorFixture || contact.getFixtureB() == playerSensorFixture)) {
            Vector2 pos = player.getPosition();
            WorldManifold manifold = contact.getWorldManifold();
            boolean below = true;
            for (int j = 0; j < manifold.getNumberOfContactPoints(); j++) {
                below &= (manifold.getPoints()[j].y < pos.y - 1.5f);
            }
            if (below) {
                if (contact.getFixtureA().getUserData() != null && contact.getFixtureA().getUserData().equals("p")) {
                    groundedPlatform = (Platform) contact.getFixtureA().getBody().getUserData();
                }
                if (contact.getFixtureB().getUserData() != null && contact.getFixtureB().getUserData().equals("p")) {
                    groundedPlatform = (Platform) contact.getFixtureB().getBody().getUserData();
                }
                return true;
            }
            return false;
        }
    }
    return false;
}
