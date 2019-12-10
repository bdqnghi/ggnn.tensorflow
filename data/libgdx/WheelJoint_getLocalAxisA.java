/*
		b2WheelJoint* joint = (b2WheelJoint*)addr;
		anchor[0] = joint->GetLocalAnchorB().x;
		anchor[1] = joint->GetLocalAnchorB().y;
	*/
public Vector2 getLocalAxisA() {
    jniGetLocalAxisA(addr, tmp);
    localAxisA.set(tmp[0], tmp[1]);
    return localAxisA;
}
