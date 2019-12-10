public float getDensity() {
    // return diagonalPpi / 160f;
    return Toolkit.getDefaultToolkit().getScreenResolution() / 160f;
}
