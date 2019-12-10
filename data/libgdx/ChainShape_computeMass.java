@Override
public void computeMass(MassData massData, float density) {
    massData.mass = 0.0f;
    massData.center.setZero();
    massData.I = 0.0f;
}
