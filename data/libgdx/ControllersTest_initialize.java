private void initialize() {
    if (initialized)
        return;
    // print the currently connected controllers to the console
    print("Controllers: " + Controllers.getControllers().size);
    int i = 0;
    for (Controller controller : Controllers.getControllers()) {
        print("#" + i++ + ": " + controller.getName());
    }
    if (Controllers.getControllers().size == 0)
        print("No controllers attached");
    // setup the listener that prints events to the console
    Controllers.addListener(new ControllerListener() {

        public int indexOf(Controller controller) {
            return Controllers.getControllers().indexOf(controller, true);
        }

        @Override
        public void connected(Controller controller) {
            print("connected " + controller.getName());
            int i = 0;
            for (Controller c : Controllers.getControllers()) {
                print("#" + i++ + ": " + c.getName());
            }
        }

        @Override
        public void disconnected(Controller controller) {
            print("disconnected " + controller.getName());
            int i = 0;
            for (Controller c : Controllers.getControllers()) {
                print("#" + i++ + ": " + c.getName());
            }
            if (Controllers.getControllers().size == 0)
                print("No controllers attached");
        }

        @Override
        public boolean buttonDown(Controller controller, int buttonIndex) {
            print("#" + indexOf(controller) + ", button " + buttonIndex + " down");
            return false;
        }

        @Override
        public boolean buttonUp(Controller controller, int buttonIndex) {
            print("#" + indexOf(controller) + ", button " + buttonIndex + " up");
            return false;
        }

        @Override
        public boolean axisMoved(Controller controller, int axisIndex, float value) {
            print("#" + indexOf(controller) + ", axis " + axisIndex + ": " + value);
            return false;
        }

        @Override
        public boolean povMoved(Controller controller, int povIndex, PovDirection value) {
            print("#" + indexOf(controller) + ", pov " + povIndex + ": " + value);
            return false;
        }

        @Override
        public boolean xSliderMoved(Controller controller, int sliderIndex, boolean value) {
            print("#" + indexOf(controller) + ", x slider " + sliderIndex + ": " + value);
            return false;
        }

        @Override
        public boolean ySliderMoved(Controller controller, int sliderIndex, boolean value) {
            print("#" + indexOf(controller) + ", y slider " + sliderIndex + ": " + value);
            return false;
        }

        @Override
        public boolean accelerometerMoved(Controller controller, int accelerometerIndex, Vector3 value) {
            // not printing this as we get to many values
            return false;
        }
    });
    initialized = true;
}
