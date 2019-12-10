@Override
public void dispose() {
    super.dispose();
    if (shape != null)
        shape.dispose();
    shape = null;
}
