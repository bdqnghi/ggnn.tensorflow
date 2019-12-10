@Override
public void onCreate(Bundle savedInstanceState) {
    super.onCreate(savedInstanceState);
    test = GdxTests.newTest(getArguments().getString("test"));
}
