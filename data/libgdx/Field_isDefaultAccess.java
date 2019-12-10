/**
 * Return true if the field does not include any of the {@code private}, {@code protected}, or {@code public} modifiers.
 */
public boolean isDefaultAccess() {
    return !isPrivate() && !isProtected() && !isPublic();
}
