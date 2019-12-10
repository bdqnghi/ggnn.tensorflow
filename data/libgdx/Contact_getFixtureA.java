/*
		b2Contact* contact = (b2Contact*)addr;
		return contact->IsEnabled();
	*/
/**
 * Get the first fixture in this contact.
 */
public Fixture getFixtureA() {
    return world.fixtures.get(jniGetFixtureA(addr));
}
