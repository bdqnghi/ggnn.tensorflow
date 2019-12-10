@Override
public void render() {
    if ((loading > 0) && (++loading > 2))
        loadnext();
    tests[testIndex].render();
    fpsLabel.setText(tests[testIndex].performance);
    hud.draw();
}
