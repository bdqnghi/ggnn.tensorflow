@Override
public void dispose() {
    texture.dispose();
    plane.dispose();
    projTexShader.dispose();
    ui.dispose();
    skin.dispose();
// renderer.dispose();
}
