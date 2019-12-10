public void onCreate(Bundle bundle) {
    super.onCreate(bundle);
    // obtain the test info
    Bundle extras = getIntent().getExtras();
    String testName = (String) extras.get("test");
    GdxTest test = GdxTests.newTest(testName);
    // and run the application...
    AndroidApplicationConfiguration config = new AndroidApplicationConfiguration();
    config.useImmersiveMode = true;
    initialize(test, config);
}
