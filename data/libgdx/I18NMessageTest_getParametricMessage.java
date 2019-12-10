private String getParametricMessage(String header, I18NBundle rb) {
    return header + " -> " + rb.format("msgWithArgs", "LibGDX", MathUtils.PI, now);
}
