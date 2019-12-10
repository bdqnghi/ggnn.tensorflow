@Override
protected void removePanel() {
    super.removePanel();
    editor.getEmitter().influencers.removeValue(value, true);
    editor.getEmitter().init();
    editor.getEmitter().start();
    editor.reloadRows();
}
