/**
 * Short-cut function to determine if either body is inactive.
 */
public boolean isActive() {
    return jniIsActive(addr);
}
