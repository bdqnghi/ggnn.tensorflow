@Override
public boolean reportParticle(int index) {
    assert (index >= 0 && index < system.m_count);
    if (shape.testPoint(xf, system.m_positionBuffer.data[index])) {
        system.destroyParticle(index, callDestructionListener);
        destroyed++;
    }
    return true;
}
