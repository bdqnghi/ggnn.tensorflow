/*
		b2Contact* contact = (b2Contact*)addr;
		return (jlong)contact->GetFixtureB();
	*/
/**
 * Get the child primitive index for fixture A.
 */
public int getChildIndexA() {
    return jniGetChildIndexA(addr);
}
