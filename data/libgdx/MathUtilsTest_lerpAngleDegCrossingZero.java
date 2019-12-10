@Test
public void lerpAngleDegCrossingZero() {
    assertEquals(350, MathUtils.lerpAngleDeg(350, 10, 0.0f), 0.01f);
    assertEquals(0, MathUtils.lerpAngleDeg(350, 10, 0.5f), 0.01f);
    assertEquals(10, MathUtils.lerpAngleDeg(350, 10, 1.0f), 0.01f);
}
