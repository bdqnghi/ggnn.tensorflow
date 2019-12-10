@Test
public void getTest() {
    final Queue<Integer> q = new Queue<Integer>(7);
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            q.addLast(j);
        }
        assertEquals("get(0) is not equal to peek (" + i + ")", q.get(0), q.first());
        assertEquals("get(size-1) is not equal to peekLast (" + i + ")", q.get(q.size - 1), q.last());
        for (int j = 0; j < 4; j++) {
            assertTrue(q.get(j) == j);
        }
        for (int j = 0; j < 4 - 1; j++) {
            q.removeFirst();
            assertEquals("get(0) is not equal to peek (" + i + ")", q.get(0), q.first());
        }
        q.removeFirst();
        // Failing this means broken test
        assert q.size == 0;
        try {
            q.get(0);
            fail("get() on empty queue did not throw");
        } catch (IndexOutOfBoundsException ignore) {
        // Expected
        }
    }
}
