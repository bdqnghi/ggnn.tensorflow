@Override
public Preferences getPreferences(String name) {
    return new AndroidPreferences(getActivity().getSharedPreferences(name, Context.MODE_PRIVATE));
}
