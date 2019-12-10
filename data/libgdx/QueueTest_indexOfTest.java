@Test
public void indexOfTest() {
    final Queue<Integer> q = new Queue<Integer>();
    // Test head < tail.
    for (int j = 0; j <= 6; j++) q.addLast(j);
    for (int j = 0; j <= 6; j++) assertEquals(q.indexOf(j, false), j);
    // Test head >= tail.
    q.clear();
    for (int j = 2; j >= 0; j--) q.addFirst(j);
    for (int j = 3; j <= 6; j++) q.addLast(j);
    for (int j = 0; j <= 6; j++) assertEquals(q.indexOf(j, false), j);
}
