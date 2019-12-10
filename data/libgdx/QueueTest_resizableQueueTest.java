@Test
public void resizableQueueTest() {
    final Queue<Integer> q = new Queue<Integer>(8);
    assertTrue("New queue is not empty!", q.size == 0);
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < i; j++) {
            try {
                q.addLast(j);
            } catch (IllegalStateException e) {
                fail("Failed to add element " + j + " (" + i + ")");
            }
            final Integer peeked = q.last();
            assertTrue("peekLast shows " + peeked + ", should be " + j + " (" + i + ")", peeked.equals(j));
            final int size = q.size;
            assertTrue("Size should be " + (j + 1) + " but is " + size + " (" + i + ")", size == j + 1);
        }
        if (i != 0) {
            final Integer peek = q.first();
            assertTrue("First thing is not zero but " + peek + " (" + i + ")", peek == 0);
        }
        for (int j = 0; j < i; j++) {
            final Integer pop = q.removeFirst();
            assertTrue("Popped should be " + j + " but is " + pop + " (" + i + ")", pop == j);
            final int size = q.size;
            assertTrue("Size should be " + (i - 1 - j) + " but is " + size + " (" + i + ")", size == i - 1 - j);
        }
        assertTrue("Not empty after cycle " + i, q.size == 0);
    }
    for (int i = 0; i < 56; i++) {
        q.addLast(42);
    }
    q.clear();
    assertTrue("Clear did not clear properly", q.size == 0);
}
