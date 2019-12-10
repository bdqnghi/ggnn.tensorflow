@Override
public void destructor() {
    for (int i = 0; i < distanceJoints.length; ++i) {
        world.destroyJoint(distanceJoints[i]);
    }
}
