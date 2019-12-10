public static TestViewFragment newInstance(String testName) {
    Bundle arguments = new Bundle();
    arguments.putString("test", testName);
    TestViewFragment fragment = new TestViewFragment();
    fragment.setArguments(arguments);
    return fragment;
}
