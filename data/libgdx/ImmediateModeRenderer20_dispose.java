public void dispose() {
    if (ownsShader && shader != null)
        shader.dispose();
    mesh.dispose();
}
