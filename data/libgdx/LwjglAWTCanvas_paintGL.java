@Override
public void paintGL() {
    try {
        boolean systemPaint = !(EventQueue.getCurrentEvent() instanceof NonSystemPaint);
        render(systemPaint);
        Toolkit.getDefaultToolkit().getSystemEventQueue().postEvent(nonSystemPaint);
    } catch (Throwable ex) {
        exception(ex);
    }
}
