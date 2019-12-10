public AmbientCubemap clamp() {
    for (int i = 0; i < data.length; i++) data[i] = clamp(data[i]);
    return this;
}
