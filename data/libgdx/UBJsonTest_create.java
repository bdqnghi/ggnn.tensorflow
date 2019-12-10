@Override
public void create() {
    try {
        UBJsonWriter uw = new UBJsonWriter(Gdx.files.external(fn).write(false));
        uw.object();
        uw.set(longString, longString);
        uw.set("0floats", new float[] {});
        uw.set("3floats", new float[] { 1, 2, 3.456789f });
        uw.set("xfloats", new float[] { Float.MIN_VALUE, Float.MAX_VALUE, Float.NaN, Float.NEGATIVE_INFINITY });
        uw.set("double", 0.000000000000000000001);
        uw.set("long", Long.MAX_VALUE);
        uw.array("arr");
        uw.object().pop();
        uw.value(true).value(false).value(true);
        uw.value((byte) 254);
        uw.value((byte) (-2));
        uw.value((short) -32000);
        uw.value((int) -123456);
        uw.value((long) (-((1 << 63) - 1)));
        uw.pop();
        uw.pop();
        uw.close();
        UBJsonReader ur = new UBJsonReader();
        ur.oldFormat = false;
        JsonValue v = ur.parse(Gdx.files.external(fn));
        Gdx.app.log("UBJsonTest", "result = \n" + v.toString());
        performanceTest();
        Gdx.app.log("UBJsonTest", "Test succeeded");
    } catch (Throwable t) {
        Gdx.app.error("UBJsonTest", "Test failed", t);
    }
}
