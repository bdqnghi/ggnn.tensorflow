@Override
public boolean tap(float x, float y, int count, int button) {
    app.log("TestCollection", "disposing test '" + tests[testIndex].getClass().getName());
    tests[testIndex].dispose();
    testIndex++;
    if (testIndex >= tests.length)
        testIndex = 0;
    Box2DTest test = tests[testIndex];
    test.create();
    app.log("TestCollection", "created test '" + tests[testIndex].getClass().getName());
    return false;
}
