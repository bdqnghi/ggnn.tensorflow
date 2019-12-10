@Override
public void write(Json json) {
    json.writeValue("velocities", velocities, Array.class, DynamicsModifier.class);
}
