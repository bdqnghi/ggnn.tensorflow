@Override
public void create() {
    // test nanos -> millis -> nanos
    long now = TimeUtils.nanoTime();
    long nowConvertToMillis = TimeUtils.nanosToMillis(now);
    long nowConvertBackToNanos = TimeUtils.millisToNanos(nowConvertToMillis);
    assertEpsilonEqual(now, nowConvertBackToNanos, "Nano -> Millis conversion");
    // test millis -> nanos -> millis
    long millis = TimeUtils.millis();
    long millisToNanos = TimeUtils.millisToNanos(millis);
    long nanosToMillis = TimeUtils.nanosToMillis(millisToNanos);
    assertAbsoluteEqual(millis, nanosToMillis, "Millis -> Nanos conversion");
    // test comparison for 1 sec
    long oneSecondMillis = 1000;
    long oneSecondNanos = 1000000000;
    assertAbsoluteEqual(oneSecondMillis, TimeUtils.nanosToMillis(oneSecondNanos), "One Second Comparison, Nano -> Millis");
    assertAbsoluteEqual(TimeUtils.millisToNanos(oneSecondMillis), oneSecondNanos, "One Second Comparison, Millis -> Nanos");
}
