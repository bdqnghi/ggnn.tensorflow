/*
		b2Fixture* fixture = (b2Fixture*)addr;
		fixture->SetRestitution(restitution);
	*/
// /// Get the fixture's AABB. This AABB may be enlarge and/or stale.
// /// If you need a more accurate AABB, compute it using the shape and
// /// the body transform.
// const b2AABB& GetAABB() const;
/**
 * Sets custom user data.
 */
public void setUserData(Object userData) {
    this.userData = userData;
}
