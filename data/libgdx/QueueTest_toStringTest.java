@Test
public void toStringTest() {
    Queue<Integer> q = new Queue<Integer>(1);
    assertTrue(q.toString().equals("[]"));
    q.addLast(4);
    assertTrue(q.toString().equals("[4]"));
    q.addLast(5);
    q.addLast(6);
    q.addLast(7);
    assertTrue(q.toString().equals("[4, 5, 6, 7]"));
}
