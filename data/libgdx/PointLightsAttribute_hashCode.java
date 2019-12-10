@Override
public int hashCode() {
    int result = super.hashCode();
    for (PointLight light : lights) result = 1231 * result + (light == null ? 0 : light.hashCode());
    return result;
}
