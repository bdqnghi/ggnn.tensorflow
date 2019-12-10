@Override
public int hashCode() {
    int result = super.hashCode();
    for (DirectionalLight light : lights) result = 1229 * result + (light == null ? 0 : light.hashCode());
    return result;
}
