/*
		b2Joint* joint = (b2Joint*)addr;
		b2Vec2 f = joint->GetReactionForce(inv_dt);
		reactionForce[0] = f.x;
		reactionForce[1] = f.y;
	*/
/**
 * Get the reaction torque on body2 in N*m.
 */
public float getReactionTorque(float inv_dt) {
    return jniGetReactionTorque(addr, inv_dt);
}
