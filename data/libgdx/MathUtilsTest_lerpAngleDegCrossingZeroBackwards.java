@Test
public void lerpAngleDegCrossingZeroBackwards() {
    assertEquals(10, MathUtils.lerpAngleDeg(10, 350, 0.0f), 0.01f);
    assertEquals(0, MathUtils.lerpAngleDeg(10, 350, 0.5f), 0.01f);
    assertEquals(350, MathUtils.lerpAngleDeg(10, 350, 1.0f), 0.01f);
}
