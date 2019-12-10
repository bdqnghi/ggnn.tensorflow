/**
 * Frees all obtained instances.
 */
public void flush() {
    super.freeAll(obtained);
    obtained.clear();
}
