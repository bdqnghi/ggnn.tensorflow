@Override
public void dispose() {
    if (wrapper != null) {
        wrapper.dispose();
        wrapper = null;
    }
    super.dispose();
}
