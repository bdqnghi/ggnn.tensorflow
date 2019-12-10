public static GdxTest newTest(String testName) {
    testName = originalToObfuscated.get(testName, testName);
    try {
        return forName(testName).newInstance();
    } catch (InstantiationException e) {
        e.printStackTrace();
    } catch (IllegalAccessException e) {
        e.printStackTrace();
    }
    return null;
}
