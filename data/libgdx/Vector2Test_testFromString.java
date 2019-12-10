@Test
public void testFromString() {
    assertEquals(new Vector2(-5f, 42.00055f), new Vector2().fromString("(-5,42.00055)"));
}
