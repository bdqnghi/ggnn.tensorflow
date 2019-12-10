@Test
public void lerpAngleDeg() {
    assertEquals(10, MathUtils.lerpAngleDeg(10, 30, 0.0f), 0.01f);
    assertEquals(20, MathUtils.lerpAngleDeg(10, 30, 0.5f), 0.01f);
    assertEquals(30, MathUtils.lerpAngleDeg(10, 30, 1.0f), 0.01f);
}
