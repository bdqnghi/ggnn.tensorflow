@Override
public void read(Json json, JsonValue jsonData) {
    velocities.addAll(json.readValue("velocities", Array.class, DynamicsModifier.class, jsonData));
}
