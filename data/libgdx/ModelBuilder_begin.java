/**
 * Begin building a new model
 */
public void begin() {
    if (model != null)
        throw new GdxRuntimeException("Call end() first");
    node = null;
    model = new Model();
    builders.clear();
}
