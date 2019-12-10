@Override
public float getDensity() {
    if (config.overrideDensity != -1)
        return config.overrideDensity / 160f;
    return (Toolkit.getDefaultToolkit().getScreenResolution() / 160f);
}
