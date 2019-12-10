protected void allocRenderable() {
    renderable = new Renderable();
    renderable.meshPart.primitiveType = GL20.GL_POINTS;
    renderable.meshPart.offset = 0;
    renderable.material = new Material(new BlendingAttribute(GL20.GL_ONE, GL20.GL_ONE_MINUS_SRC_ALPHA, 1f), new DepthTestAttribute(GL20.GL_LEQUAL, false), TextureAttribute.createDiffuse((Texture) null));
}
