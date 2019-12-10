@Override
public boolean openURI(String URI) {
    return uiApp.openURL(new NSURL(URI));
}
