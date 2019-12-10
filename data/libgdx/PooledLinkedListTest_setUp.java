@Before
public void setUp() {
    list = new PooledLinkedList<Integer>(10);
    list.add(1);
    list.add(2);
    list.add(3);
}
