/*
		b2Fixture* fixture = (b2Fixture*)addr;
		return fixture->TestPoint( b2Vec2( x, y ) );
	*/
// const b2Body* GetBody() const;
// 
// /// Get the next fixture in the parent body's fixture list.
// /// @return the next shape.
// b2Fixture* GetNext();
// const b2Fixture* GetNext() const;
// 
// /// Get the user data that was assigned in the fixture definition. Use this to
// /// store your application specific data.
// void* GetUserData() const;
// 
// /// Set the user data. Use this to store your application specific data.
// void SetUserData(void* data);
// 
// /// Cast a ray against this shape.
// /// @param output the ray-cast results.
// /// @param input the ray-cast input parameters.
// bool RayCast(b2RayCastOutput* output, const b2RayCastInput& input) const;
// 
// /// Get the mass data for this fixture. The mass data is based on the density and
// /// the shape. The rotational inertia is about the shape's origin. This operation
// /// may be expensive.
// void GetMassData(b2MassData* massData) const;
/**
 * Set the density of this fixture. This will _not_ automatically adjust the mass of the body. You must call
 * b2Body::ResetMassData to update the body's mass.
 */
public void setDensity(float density) {
    jniSetDensity(addr, density);
}
