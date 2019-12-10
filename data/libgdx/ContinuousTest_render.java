public void render() {
    super.render();
    m_stepCount++;
    if (m_stepCount % 60 == 0)
        launch();
}
