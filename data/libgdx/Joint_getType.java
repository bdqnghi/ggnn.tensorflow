/**
 * Get the type of the concrete joint.
 */
public JointType getType() {
    int type = jniGetType(addr);
    if (type > 0 && type < JointType.valueTypes.length)
        return JointType.valueTypes[type];
    else
        return JointType.Unknown;
}
