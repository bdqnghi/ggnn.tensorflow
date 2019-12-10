/**
 * Sets the flag indicating whether to use the simplified message pattern. The flag must be set before calling the factory
 * methods {@code createBundle}. Notice that this method has no effect on the GWT backend where it's always assumed to be true.
 */
public static void setSimpleFormatter(boolean enabled) {
    simpleFormatter = enabled;
}
