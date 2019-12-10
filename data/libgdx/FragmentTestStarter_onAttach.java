@Override
public void onAttach(Activity activity) {
    super.onAttach(activity);
    if (activity instanceof FragmentTestStarter) {
        this.activity = (FragmentTestStarter) activity;
    }
}
