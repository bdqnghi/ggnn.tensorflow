/**
 * Linear damping is use to reduce the linear velocity. The damping parameter can be larger than
 * 1.0f but the damping effect becomes sensitive to the time step when the damping parameter is
 * large.
 */
public void setLinearDamping(float linearDamping) {
    this.linearDamping = linearDamping;
}
