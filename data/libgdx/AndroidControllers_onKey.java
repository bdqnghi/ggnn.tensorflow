@Override
public boolean onKey(View view, int keyCode, KeyEvent keyEvent) {
    AndroidController controller = controllerMap.get(keyEvent.getDeviceId());
    if (controller != null) {
        if (controller.getButton(keyCode) && keyEvent.getAction() == KeyEvent.ACTION_DOWN) {
            return true;
        }
        synchronized (eventQueue) {
            AndroidControllerEvent event = eventPool.obtain();
            event.controller = controller;
            if (keyEvent.getAction() == KeyEvent.ACTION_DOWN) {
                event.type = AndroidControllerEvent.BUTTON_DOWN;
            } else {
                event.type = AndroidControllerEvent.BUTTON_UP;
            }
            event.code = keyCode;
            eventQueue.add(event);
        }
        if (keyCode == KeyEvent.KEYCODE_BACK && !Gdx.input.isCatchBackKey()) {
            return false;
        }
        return true;
    } else {
        return false;
    }
}
