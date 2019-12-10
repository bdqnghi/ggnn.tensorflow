/*
		b2Contact* contact = (b2Contact*)addr;
		return (jlong)contact->GetFixtureA();
	*/
/**
 * Get the second fixture in this contact.
 */
public Fixture getFixtureB() {
    return world.fixtures.get(jniGetFixtureB(addr));
}
