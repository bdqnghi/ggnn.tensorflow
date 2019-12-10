public void onCreate(Bundle bundle) {
    super.onCreate(bundle);
    tv = new TextView(this);
    sv = new ScrollView(this);
    sv.addView(tv);
    setContentView(sv);
    testThread.start();
}
