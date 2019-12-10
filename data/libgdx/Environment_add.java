public Environment add(SpotLight light) {
    SpotLightsAttribute spotLights = ((SpotLightsAttribute) get(SpotLightsAttribute.Type));
    if (spotLights == null)
        set(spotLights = new SpotLightsAttribute());
    spotLights.lights.add(light);
    return this;
}
