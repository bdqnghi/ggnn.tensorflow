/**
 * Angular damping is use to reduce the angular velocity. The damping parameter can be larger than
 * 1.0f but the damping effect becomes sensitive to the time step when the damping parameter is
 * large.
 */
public void setAngularDamping(float angularDamping) {
    this.angularDamping = angularDamping;
}
