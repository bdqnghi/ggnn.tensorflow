@Override
public void dispose() {
    shader.dispose();
    textureHW.dispose();
    textureSW.dispose();
    mesh.dispose();
    ui.dispose();
    skin.dispose();
}
