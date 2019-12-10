private String glInfo() {
    try {
        return // 
        GL11.glGetString(GL11.GL_VENDOR) + "\n" + GL11.glGetString(GL11.GL_RENDERER) + // 
        "\n" + GL11.glGetString(GL11.GL_VERSION);
    } catch (Throwable ignored) {
    }
    return "";
}
