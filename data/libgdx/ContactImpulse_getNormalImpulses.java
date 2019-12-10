public float[] getNormalImpulses() {
    for (int i = 0; i < impulse.count; i++) {
        normalImpulses[i] = impulse.normalImpulses[i];
    }
    return normalImpulses;
}
