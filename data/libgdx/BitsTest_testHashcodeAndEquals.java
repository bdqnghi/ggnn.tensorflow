@Test
public void testHashcodeAndEquals() {
    Bits b1 = new Bits();
    Bits b2 = new Bits();
    b1.set(1);
    b2.set(1);
    assertEquals(b1.hashCode(), b2.hashCode());
    assertTrue(b1.equals(b2));
    // temporarily setting/clearing a single bit causing
    // the backing array to grow
    b2.set(420);
    b2.clear(420);
    assertEquals(b1.hashCode(), b2.hashCode());
    assertTrue(b1.equals(b2));
    b1.set(810);
    b1.clear(810);
    assertEquals(b1.hashCode(), b2.hashCode());
    assertTrue(b1.equals(b2));
}
