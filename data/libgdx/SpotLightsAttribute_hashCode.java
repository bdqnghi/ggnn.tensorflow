@Override
public int hashCode() {
    int result = super.hashCode();
    for (SpotLight light : lights) result = 1237 * result + (light == null ? 0 : light.hashCode());
    return result;
}
