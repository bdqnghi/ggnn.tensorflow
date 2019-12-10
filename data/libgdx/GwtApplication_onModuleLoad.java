@Override
public void onModuleLoad() {
    GwtApplication.agentInfo = computeAgentInfo();
    this.listener = getApplicationListener();
    this.config = getConfig();
    this.log = config.log;
    addEventListeners();
    if (config.rootPanel != null) {
        this.root = config.rootPanel;
    } else {
        Element element = Document.get().getElementById("embed-" + GWT.getModuleName());
        if (element == null) {
            VerticalPanel panel = new VerticalPanel();
            panel.setWidth("" + config.width + "px");
            panel.setHeight("" + config.height + "px");
            panel.setHorizontalAlignment(HasHorizontalAlignment.ALIGN_CENTER);
            panel.setVerticalAlignment(HasVerticalAlignment.ALIGN_MIDDLE);
            RootPanel.get().add(panel);
            RootPanel.get().setWidth("" + config.width + "px");
            RootPanel.get().setHeight("" + config.height + "px");
            this.root = panel;
        } else {
            VerticalPanel panel = new VerticalPanel();
            panel.setWidth("" + config.width + "px");
            panel.setHeight("" + config.height + "px");
            panel.setHorizontalAlignment(HasHorizontalAlignment.ALIGN_CENTER);
            panel.setVerticalAlignment(HasVerticalAlignment.ALIGN_MIDDLE);
            element.appendChild(panel.getElement());
            root = panel;
        }
    }
    // initialize SoundManager2
    SoundManager.init(GWT.getModuleBaseURL(), 9, config.preferFlash, new SoundManager.SoundManagerCallback() {

        @Override
        public void onready() {
            final PreloaderCallback callback = getPreloaderCallback();
            preloader = createPreloader();
            preloader.preload("assets.txt", new PreloaderCallback() {

                @Override
                public void error(String file) {
                    callback.error(file);
                }

                @Override
                public void update(PreloaderState state) {
                    callback.update(state);
                    if (state.hasEnded()) {
                        getRootPanel().clear();
                        if (loadingListener != null)
                            loadingListener.beforeSetup();
                        setupLoop();
                        if (loadingListener != null)
                            loadingListener.afterSetup();
                    }
                }
            });
        }

        @Override
        public void ontimeout(String status, String errorType) {
            error("SoundManager", status + " " + errorType);
        }
    });
}
