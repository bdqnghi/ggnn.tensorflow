public float[] getTangentImpulses() {
    for (int i = 0; i < impulse.count; i++) {
        tangentImpulses[i] = impulse.tangentImpulses[i];
    }
    return tangentImpulses;
}
