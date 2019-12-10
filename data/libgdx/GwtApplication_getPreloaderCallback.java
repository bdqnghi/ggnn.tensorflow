public PreloaderCallback getPreloaderCallback() {
    final Panel preloaderPanel = new VerticalPanel();
    preloaderPanel.setStyleName("gdx-preloader");
    final Image logo = new Image(GWT.getModuleBaseURL() + "logo.png");
    logo.setStyleName("logo");
    preloaderPanel.add(logo);
    final Panel meterPanel = new SimplePanel();
    meterPanel.setStyleName("gdx-meter");
    meterPanel.addStyleName("red");
    final InlineHTML meter = new InlineHTML();
    final Style meterStyle = meter.getElement().getStyle();
    meterStyle.setWidth(0, Unit.PCT);
    meterPanel.add(meter);
    preloaderPanel.add(meterPanel);
    getRootPanel().add(preloaderPanel);
    return new PreloaderCallback() {

        @Override
        public void error(String file) {
            System.out.println("error: " + file);
        }

        @Override
        public void update(PreloaderState state) {
            meterStyle.setWidth(100f * state.getProgress(), Unit.PCT);
        }
    };
}
