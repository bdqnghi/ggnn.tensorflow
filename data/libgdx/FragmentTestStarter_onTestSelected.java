public void onTestSelected(String testName) {
    if (view != null) {
        getSupportFragmentManager().beginTransaction().replace(2, TestViewFragment.newInstance(testName)).commit();
    } else {
        startActivity(new Intent(this, GdxTestActivity.class).putExtra("test", testName));
    }
}
