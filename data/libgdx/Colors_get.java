/**
 * Convenience method to lookup a color by {@code name}. The invocation of this method is equivalent to the expression
 * {@code Colors.getColors().get(name)}
 *
 * @param name the name of the color
 * @return the color to which the specified {@code name} is mapped, or {@code null} if there was no mapping for {@code name}
 *         .
 */
public static Color get(String name) {
    return map.get(name);
}
