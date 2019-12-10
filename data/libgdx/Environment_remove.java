public Environment remove(SpotLight light) {
    if (has(SpotLightsAttribute.Type)) {
        SpotLightsAttribute spotLights = ((SpotLightsAttribute) get(SpotLightsAttribute.Type));
        spotLights.lights.removeValue(light, false);
        if (spotLights.lights.size == 0)
            remove(SpotLightsAttribute.Type);
    }
    return this;
}
