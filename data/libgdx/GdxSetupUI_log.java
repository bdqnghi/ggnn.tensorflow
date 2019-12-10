void log(final String text) {
    EventQueue.invokeLater(new Runnable() {

        public void run() {
            ui.textArea.append(text + "\n");
            ui.textArea.setCaretPosition(ui.textArea.getDocument().getLength());
        }
    });
}
