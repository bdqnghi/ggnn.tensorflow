@Override
public void dispose() {
    for (int i = 0; i < getPassQuantity(); i++) {
        frameBuffers[i].dispose();
        passShaderProviders[i].dispose();
    }
    mainShaderProvider.dispose();
}
