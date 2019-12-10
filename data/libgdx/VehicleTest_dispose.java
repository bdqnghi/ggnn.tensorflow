@Override
public void dispose() {
    super.dispose();
    vehicle.dispose();
    vehicle = null;
    raycaster.dispose();
    raycaster = null;
    tuning.dispose();
    tuning = null;
}
