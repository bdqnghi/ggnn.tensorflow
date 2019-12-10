@Override
public boolean onGenericMotion(View view, MotionEvent motionEvent) {
    if ((motionEvent.getSource() & InputDevice.SOURCE_CLASS_JOYSTICK) == 0)
        return false;
    AndroidController controller = controllerMap.get(motionEvent.getDeviceId());
    if (controller != null) {
        synchronized (eventQueue) {
            final int historySize = motionEvent.getHistorySize();
            int axisIndex = 0;
            for (int axisId : controller.axesIds) {
                float axisValue = motionEvent.getAxisValue(axisId);
                if (controller.getAxis(axisIndex) == axisValue) {
                    axisIndex++;
                    continue;
                }
                AndroidControllerEvent event = eventPool.obtain();
                event.type = AndroidControllerEvent.AXIS;
                event.controller = controller;
                event.code = axisIndex;
                event.axisValue = axisValue;
                eventQueue.add(event);
                axisIndex++;
            }
        }
        return true;
    }
    return false;
}
