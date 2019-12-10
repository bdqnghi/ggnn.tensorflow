@Override
public void set(BaseShader shader, int inputID, Renderable renderable, Attributes combinedAttributes) {
    shader.set(inputID, temp.set(shader.camera.view).mul(renderable.worldTransform));
}
