@Override
public void dispose() {
    mesh.dispose();
    if (ownsShader && shader != null)
        shader.dispose();
}
