public void stop() {
    EventQueue.invokeLater(new Runnable() {

        public void run() {
            if (!running)
                return;
            running = false;
            try {
                Display.destroy();
                if (audio != null)
                    audio.dispose();
            } catch (Throwable ignored) {
            }
            Array<LifecycleListener> listeners = lifecycleListeners;
            synchronized (listeners) {
                for (LifecycleListener listener : listeners) {
                    listener.pause();
                    listener.dispose();
                }
            }
            listener.pause();
            listener.dispose();
        }
    });
}
