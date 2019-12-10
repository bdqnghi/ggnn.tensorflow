/*
		b2Joint* joint = (b2Joint*)addr;
		return (jlong)joint->GetBodyA();
	*/
/**
 * Get the second body attached to this joint.
 */
public Body getBodyB() {
    return world.bodies.get(jniGetBodyB(addr));
}
