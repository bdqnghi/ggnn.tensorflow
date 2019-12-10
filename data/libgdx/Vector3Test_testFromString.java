@Test
public void testFromString() {
    assertEquals(new Vector3(-5f, 42.00055f, 44444.32f), new Vector3().fromString("(-5,42.00055,44444.32)"));
}
