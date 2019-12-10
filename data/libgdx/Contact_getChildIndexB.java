/*
		b2Contact* contact = (b2Contact*)addr;
		return contact->GetChildIndexA();
	*/
/**
 * Get the child primitive index for fixture B.
 */
public int getChildIndexB() {
    return jniGetChildIndexB(addr);
}
