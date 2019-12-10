@Override
protected void construct() {
    super.construct();
    wrapper = new btCollisionObjectWrapper(getWrapper().getCPointer(), false);
}
