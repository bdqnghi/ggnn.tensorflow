/*
		b2Joint* joint = (b2Joint*)addr;
		b2Vec2 a = joint->GetAnchorB();
		anchorB[0] = a.x;
		anchorB[1] = a.y;
	*/
public boolean getCollideConnected() {
    return jniGetCollideConnected(addr);
}
