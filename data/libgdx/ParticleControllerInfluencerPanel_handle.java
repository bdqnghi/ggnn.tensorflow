@Override
public void handle(int aEventType, Object aEventData) {
    if (aEventType == FlameMain.EVT_ASSET_RELOADED) {
        Object[] data = (Object[]) aEventData;
        if (data[0] instanceof ParticleEffect) {
            ParticleEffect oldEffect = (ParticleEffect) data[0];
            int currentCount = value.templates.size;
            value.templates.removeAll(oldEffect.getControllers(), true);
            if (value.templates.size != currentCount) {
                int diff = currentCount - value.templates.size;
                if (diff > 0) {
                    ParticleEffect newEffect = (ParticleEffect) data[1];
                    Array<ParticleController> newControllers = newEffect.getControllers();
                    if (newControllers.size > 0) {
                        for (int i = 0, c = Math.min(diff, newControllers.size); i < c; ++i) value.templates.add(newControllers.get(i));
                    }
                } else {
                    value.templates.addAll(((ParticleEffect) editor.assetManager.get(FlameMain.DEFAULT_BILLBOARD_PARTICLE)).getControllers());
                }
                controllerPicker.reloadTemplates();
                controllerPicker.setValue(value.templates);
                editor.restart();
            }
        }
    }
}
