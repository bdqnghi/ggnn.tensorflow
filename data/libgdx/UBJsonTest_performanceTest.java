private void performanceTest() throws Exception {
    Gdx.app.log("UBJsonTest", "--- performanceTest ---");
    long start = System.currentTimeMillis();
    UBJsonWriter uw = new UBJsonWriter(Gdx.files.external(fn).write(false, 8192));
    uw.object();
    uw.set("0floats", new float[] {});
    uw.set("3floats", new float[] { 1, 2, 3.456789f });
    uw.set("xfloats", new float[] { Float.MIN_VALUE, Float.MAX_VALUE, Float.NaN, Float.NEGATIVE_INFINITY });
    uw.set("double", 0.000000000000000000001);
    uw.set("long", Long.MAX_VALUE);
    uw.array("arr");
    uw.object().pop();
    for (int i = 0; i < 50000; i++) {
        uw.value(true).value(false).value(true);
        uw.value((byte) 254);
        uw.value((byte) (-2));
        uw.value((short) -32000);
        uw.value((int) -123456);
        uw.value((long) (-((1 << 63) - 1)));
        uw.value(longString);
    }
    uw.pop();
    uw.pop();
    uw.close();
    Gdx.app.log("UBJsonTest", "Writing the test file took " + (System.currentTimeMillis() - start) + "ms");
    Gdx.app.log("UBJsonTest", "File size is " + Gdx.files.external(fn).length());
    UBJsonReader ur = new UBJsonReader();
    ur.oldFormat = false;
    start = System.currentTimeMillis();
    ur.parse(Gdx.files.external(fn));
    Gdx.app.log("UBJsonTest", "Parsing the test file took " + (System.currentTimeMillis() - start) + "ms");
}
