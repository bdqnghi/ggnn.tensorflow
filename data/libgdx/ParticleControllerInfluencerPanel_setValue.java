@Override
public void setValue(ParticleControllerInfluencer value) {
    super.setValue(value);
    if (value == null)
        return;
    controllerPicker.setValue(value.templates);
}
