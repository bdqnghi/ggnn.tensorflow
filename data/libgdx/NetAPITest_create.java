@Override
public void create() {
    batch = new SpriteBatch();
    skin = new Skin(Gdx.files.internal("data/uiskin.json"));
    font = new BitmapFont();
    stage = new Stage();
    Gdx.input.setInputProcessor(stage);
    {
        statusLabel = new Label("", skin);
        statusLabel.setWrap(true);
        statusLabel.setWidth(Gdx.graphics.getWidth() * 0.96f);
        statusLabel.setAlignment(Align.center);
        statusLabel.setPosition(Gdx.graphics.getWidth() * 0.5f - statusLabel.getWidth() * 0.5f, 30f);
        statusLabel.setColor(Color.CYAN);
        stage.addActor(statusLabel);
    }
    {
        ClickListener clickListener = new ClickListener() {

            @Override
            public void clicked(InputEvent event, float x, float y) {
                super.clicked(event, x, y);
                clickedButton = event.getListenerActor();
                setButtonDisabled(true);
                if (texture != null)
                    texture.dispose();
                texture = null;
                text = null;
                String url;
                String httpMethod = Net.HttpMethods.GET;
                String requestContent = null;
                if (clickedButton == btnDownloadImage)
                    url = "http://i.imgur.com/vxomF.jpg";
                else if (clickedButton == btnDownloadText)
                    url = "http://www.apache.org/licenses/LICENSE-2.0.txt";
                else if (clickedButton == btnDownloadLarge)
                    url = "http://libgdx.badlogicgames.com/releases/libgdx-1.2.0.zip";
                else if (clickedButton == btnDownloadError)
                    url = "http://www.badlogicgames.com/doesnotexist";
                else if (clickedButton == btnOpenUri) {
                    Gdx.net.openURI("http://libgdx.badlogicgames.com/");
                    return;
                } else {
                    url = "http://posttestserver.com/post.php?dump";
                    httpMethod = Net.HttpMethods.POST;
                    requestContent = "name1=value1&name2=value2";
                }
                httpRequest = new HttpRequest(httpMethod);
                httpRequest.setUrl(url);
                httpRequest.setContent(requestContent);
                Gdx.net.sendHttpRequest(httpRequest, NetAPITest.this);
                statusLabel.setText("Downloading data from " + httpRequest.getUrl());
            }
        };
        ClickListener cancelListener = new ClickListener() {

            @Override
            public void clicked(InputEvent event, float x, float y) {
                super.clicked(event, x, y);
                if (httpRequest != null) {
                    Gdx.net.cancelHttpRequest(httpRequest);
                    Gdx.app.log("NetAPITest", "Cancelling request " + httpRequest.getUrl());
                    statusLabel.setText("Cancelling request " + httpRequest.getUrl());
                }
            }
        };
        btnCancel = new TextButton("Cancel", skin);
        btnCancel.setPosition(Gdx.graphics.getWidth() * 0.10f, 60f);
        btnCancel.addListener(cancelListener);
        stage.addActor(btnCancel);
        btnDownloadImage = new TextButton("GET Image", skin);
        btnDownloadImage.setPosition(btnCancel.getX() + btnCancel.getWidth() + 10, 60f);
        btnDownloadImage.addListener(clickListener);
        stage.addActor(btnDownloadImage);
        btnDownloadText = new TextButton("GET Text", skin);
        btnDownloadText.setPosition(btnDownloadImage.getX() + btnDownloadImage.getWidth() + 10, 60f);
        btnDownloadText.addListener(clickListener);
        stage.addActor(btnDownloadText);
        btnDownloadLarge = new TextButton("GET Large", skin);
        btnDownloadLarge.setPosition(btnDownloadText.getX() + btnDownloadText.getWidth() + 10, 60f);
        btnDownloadLarge.addListener(clickListener);
        stage.addActor(btnDownloadLarge);
        btnDownloadError = new TextButton("GET Error", skin);
        btnDownloadError.setPosition(btnDownloadLarge.getX() + btnDownloadLarge.getWidth() + 10, 60f);
        btnDownloadError.addListener(clickListener);
        stage.addActor(btnDownloadError);
        btnPost = new TextButton("POST", skin);
        btnPost.setPosition(btnDownloadError.getX() + btnDownloadError.getWidth() + 10, 60f);
        btnPost.addListener(clickListener);
        stage.addActor(btnPost);
        btnOpenUri = new TextButton("Open URI", skin);
        btnOpenUri.setPosition(btnPost.getX() + btnPost.getWidth() + 10, 60f);
        btnOpenUri.addListener(clickListener);
        stage.addActor(btnOpenUri);
    }
}
