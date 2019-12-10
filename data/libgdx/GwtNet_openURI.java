@Override
public boolean openURI(String URI) {
    Window.open(URI, "_blank", null);
    return true;
}
