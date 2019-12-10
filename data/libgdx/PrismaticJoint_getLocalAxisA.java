/*
		b2PrismaticJoint* joint = (b2PrismaticJoint*)addr;
		anchor[0] = joint->GetLocalAnchorB().x;
		anchor[1] = joint->GetLocalAnchorB().y;
	*/
public Vector2 getLocalAxisA() {
    jniGetLocalAxisA(addr, tmp);
    localAxisA.set(tmp[0], tmp[1]);
    return localAxisA;
}
