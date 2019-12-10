@Override
public void setContinuousRendering(boolean isContinuous) {
    if (isContinuous != this.isContinuous) {
        this.isContinuous = isContinuous;
        // start the GLKViewController if we go from non-continuous -> continuous
        if (isContinuous)
            viewController.setPaused(false);
    }
}
