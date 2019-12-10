@Override
public void begin() {
    for (int i = 0; i < count; i++) {
        textures[i] = null;
        if (weights != null)
            weights[i] = 0;
    }
}
