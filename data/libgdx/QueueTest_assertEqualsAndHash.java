private void assertEqualsAndHash(Queue<?> q1, Queue<?> q2) {
    assertEquals(q1, q2);
    assertEquals("Hash codes are not equal", q1.hashCode(), q2.hashCode());
}
