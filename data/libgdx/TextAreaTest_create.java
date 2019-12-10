@Override
public void create() {
    stage = new Stage();
    Gdx.input.setInputProcessor(stage);
    skin = new Skin(Gdx.files.internal("data/uiskin.json"));
    TextArea textArea = new TextArea("Text Area\nEssentially, a text field\nwith\nmultiple\nlines.\n" + "It can even handle very loooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooong lines.", skin);
    textArea.setX(10);
    textArea.setY(10);
    textArea.setWidth(200);
    textArea.setHeight(200);
    TextField textField = new TextField("Text field", skin);
    textField.setX(10);
    textField.setY(220);
    textField.setWidth(200);
    textField.setHeight(30);
    stage.addActor(textArea);
    stage.addActor(textField);
}
