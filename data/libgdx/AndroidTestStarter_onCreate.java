@Override
public void onCreate(Bundle savedInstanceState) {
    super.onCreate(savedInstanceState);
    GdxTests.tests.add(MatrixTest.class);
    if (!GdxTests.tests.contains(APKExpansionTest.class))
        GdxTests.tests.add(APKExpansionTest.class);
    List<String> testNames = GdxTests.getNames();
    setListAdapter(new ArrayAdapter<String>(this, android.R.layout.simple_list_item_1, testNames));
    prefs = getSharedPreferences("libgdx-tests", Context.MODE_PRIVATE);
    getListView().setSelectionFromTop(prefs.getInt("index", 0), prefs.getInt("top", 0));
}
