@Override
public void onListItemClick(ListView listView, View view, int position, long id) {
    super.onListItemClick(listView, view, position, id);
    Object o = this.getListAdapter().getItem(position);
    String testName = o.toString();
    if (activity != null) {
        activity.onTestSelected(testName);
    }
}
