@Override
public void viewWillAppear(boolean arg0) {
    super.viewWillAppear(arg0);
    // start GLKViewController even though we may only draw a single frame
    // (we may be in non-continuous mode)
    setPaused(false);
}
