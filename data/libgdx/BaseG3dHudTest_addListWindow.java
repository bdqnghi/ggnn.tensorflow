protected CollapsableWindow addListWindow(String title, List list, float x, float y) {
    CollapsableWindow window = new CollapsableWindow(title, skin);
    window.row();
    ScrollPane pane = new ScrollPane(list, skin);
    pane.setFadeScrollBars(false);
    window.add(pane);
    window.pack();
    window.pack();
    if (window.getHeight() > hudHeight) {
        window.setHeight(hudHeight);
    }
    window.setX(x < 0 ? hudWidth - (window.getWidth() - (x + 1)) : x);
    window.setY(y < 0 ? hudHeight - (window.getHeight() - (y + 1)) : y);
    window.layout();
    window.collapse();
    hud.addActor(window);
    pane.setScrollX(0);
    pane.setScrollY(0);
    return window;
}
