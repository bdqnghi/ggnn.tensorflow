protected void onListItemClick(ListView listView, View view, int position, long id) {
    super.onListItemClick(listView, view, position, id);
    Editor editor = prefs.edit();
    editor.putInt("index", listView.getFirstVisiblePosition());
    editor.putInt("top", listView.getChildAt(0) == null ? 0 : listView.getChildAt(0).getTop());
    editor.commit();
    Object o = this.getListAdapter().getItem(position);
    String testName = o.toString();
    Bundle bundle = new Bundle();
    bundle.putString("test", testName);
    Intent intent = new Intent(this, GdxTestActivity.class);
    intent.putExtras(bundle);
    startActivity(intent);
}
