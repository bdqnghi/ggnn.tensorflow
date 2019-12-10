/**
 * Adds a body and the pre-made distance joint. Should only be used for deserialization.
 */
public void addBodyAndJoint(Body argBody, DistanceJoint argJoint) {
    addBody(argBody);
    if (joints == null) {
        joints = new ArrayList<DistanceJoint>();
    }
    joints.add(argJoint);
}
