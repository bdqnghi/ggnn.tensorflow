@Override
public View onCreateView(LayoutInflater inflater, ViewGroup container, Bundle savedInstanceState) {
    AndroidApplicationConfiguration config = new AndroidApplicationConfiguration();
    config.useImmersiveMode = true;
    return initializeForView(test, config);
}
