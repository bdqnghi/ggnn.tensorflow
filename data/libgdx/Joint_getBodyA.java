/*
		b2Joint* joint = (b2Joint*)addr;
		return joint->GetType();
	*/
/**
 * Get the first body attached to this joint.
 */
public Body getBodyA() {
    return world.bodies.get(jniGetBodyA(addr));
}
