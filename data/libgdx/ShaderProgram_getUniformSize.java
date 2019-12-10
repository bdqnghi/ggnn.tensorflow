/**
 * @param name the name of the uniform
 * @return the size of the uniform or 0.
 */
public int getUniformSize(String name) {
    return uniformSizes.get(name, 0);
}
