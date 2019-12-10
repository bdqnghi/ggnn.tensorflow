/**
 * Call this after you are done with time steps to clear the forces. You normally call this after
 * each call to Step, unless you are performing sub-steps. By default, forces will be
 * automatically cleared, so you don't need to call this function.
 *
 * @see setAutoClearForces
 */
public void clearForces() {
    for (Body body = m_bodyList; body != null; body = body.getNext()) {
        body.m_force.setZero();
        body.m_torque = 0.0f;
    }
}
