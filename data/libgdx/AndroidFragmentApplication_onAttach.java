@Override
public void onAttach(Activity activity) {
    if (activity instanceof Callbacks) {
        this.callbacks = (Callbacks) activity;
    } else if (getParentFragment() instanceof Callbacks) {
        this.callbacks = (Callbacks) getParentFragment();
    } else if (getTargetFragment() instanceof Callbacks) {
        this.callbacks = (Callbacks) getTargetFragment();
    } else {
        throw new RuntimeException("Missing AndroidFragmentApplication.Callbacks. Please implement AndroidFragmentApplication.Callbacks on the parent activity, fragment or target fragment.");
    }
    super.onAttach(activity);
}
