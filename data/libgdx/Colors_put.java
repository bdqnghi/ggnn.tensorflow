/**
 * Convenience method to add a {@code color} with its {@code name}. The invocation of this method is equivalent to the
 * expression {@code Colors.getColors().put(name, color)}
 *
 * @param name the name of the color
 * @param color the color
 * @return the previous {@code color} associated with {@code name}, or {@code null} if there was no mapping for {@code name}
 *         .
 */
public static Color put(String name, Color color) {
    return map.put(name, color);
}
