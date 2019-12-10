/**
 * Sets the flag indicating whether to throw a {@link MissingResourceException} from the {@link #get(String) get(key)} method
 * if no string for the given key can be found. If this flag is {@code false} the missing key surrounded by {@code ???} is
 * returned.
 */
public static void setExceptionOnMissingKey(boolean enabled) {
    exceptionOnMissingKey = enabled;
}
