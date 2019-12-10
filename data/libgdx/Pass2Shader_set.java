@Override
public void set(BaseShader shader, int inputID, Renderable renderable, Attributes combinedAttributes) {
    BaseLight l = shadowSystem.getCurrentLight();
    if (l instanceof SpotLight) {
        shader.set(inputID, ((SpotLight) l).exponent);
    }
    if (l instanceof PointLight) {
        shader.set(inputID, (float) 0);
    }
}
