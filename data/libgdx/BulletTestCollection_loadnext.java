public void loadnext() {
    app.log("TestCollection", "disposing test '" + tests[testIndex].getClass().getName() + "'");
    tests[testIndex].dispose();
    // This would be a good time for GC to kick in.
    System.gc();
    testIndex++;
    if (testIndex >= tests.length)
        testIndex = 0;
    tests[testIndex].create();
    cameraController.camera = tests[testIndex].camera;
    app.log("TestCollection", "created test '" + tests[testIndex].getClass().getName() + "'");
    titleLabel.setText(tests[testIndex].getClass().getSimpleName());
    instructLabel.setText(tests[testIndex].instructions);
    loading = 0;
}
