/*
		b2RevoluteJoint* joint = (b2RevoluteJoint*)addr;
		return joint->GetMotorTorque(invDt);
	*/
public Vector2 getLocalAnchorA() {
    jniGetLocalAnchorA(addr, tmp);
    localAnchorA.set(tmp[0], tmp[1]);
    return localAnchorA;
}
